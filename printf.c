#include "main.h"
#include <unistd.h>


/**
 * Main function of the project
 * @format: the string that is printed with certain formats
 * Return: number of printed characters.
 */
int _printf(const char *format, ...)
{
	va_list v_ls;
	buffer *buf;
	int count, var;

	buf = create_buffer();
	if (buf == NULL)
		return (0);
	if (format == NULL)
		return (0);
	count = 0;
	var = 0;
	va_start(v_ls, format);
	/* Loop through the format string to scan for values to print */
	while (format[count])
	{
		write_and_clear_buffer(buf);
		if (format[count] == '%')
		{
			var = operator_scan(buf, v_ls, format, count);
			if (var < 0)
			{
				count = var;
				break;
			}
			count += var;
			continue;
		}
		buf->content[buf->index] = format[count];
		increase_buffer(buf);
		count++;
	}
	if (buf != NULL)
		write(1, buf->content, buf->index);
	if (var >= 0)
		count = buf->padding;
	if (count < 0)
		count = 0;
	free_buffer(buf);
	va_end(v_ls);
	return (count);
}
