#include "main.h"
#include <stdarg.h>
/**
 * _print_char - print char
 * @list : struct function
 * Return: 1 si is faill
*/
int _print_char(va_list list)
{
	int c = 0;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * _print_string - print string
 * @list : struct function
 * Return: string
 */

int _print_string(va_list list)
{
	char *array = va_arg(list, char *);
	int i;

	if (array == NULL)
	array = "(null)";
	for (i = 0; array[i] != '\0'; i++)
	{
		_putchar(array[i]);
	}
	return (i);
}

/**
 * _print_percent - print %
 * @list: stocker dans list
 * Return: write %
 */
int _print_percent(va_list list)
{
	(void)list;
	return (write(1, "%", 1));
}
