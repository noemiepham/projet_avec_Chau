#include "main.h"

/**
 * operator_scan - scans src string for an operator.
 * @buf: pointer to a buffer
 * @v_ls: list for variadic arguments
 * @format: String in which to scan for the operator.
 * @format_index: the index that the '%' was found at
 *
 * Return: a count
 */
int operator_scan(buffer *buf, va_list v_ls, const char *format, int format_index)
{
	int count, operation_index, fin = 0;
	/* This stores the corresponding write function for each format */
	writer array_operation[] = {
		{"c", write_char},
		{"s", write_string},
		{"%", write_percentage_sign},
		{"d", write_signed_integer},
		{"i", write_signed_integer},
		{NULL, NULL}
	};

	/* Loop through the format string starting from position format_index */
	for (count = 1; format[format_index + count]; count++)
	{
		for (operation_index = 0; array_operation[operation_index].operation; operation_index++)
		{
			if (format[count + format_index] == *(array_operation[operation_index].operation))
			{
				if (array_operation[operation_index].write_function != NULL)
					fin = array_operation[operation_index].write_function(buf, v_ls);
				else
					break;
				if (fin == 1)
					return (count + 1);
			}
		}
		if (array_operation[operation_index].operation == NULL && format[count + format_index])
		{
			buf->content[buf->index] = format[format_index];
			increase_buffer(buf);
			return (1);
		}
	}
	if (format[count + format_index] == '\0')
	{
		buf->content[buf->index] = format[format_index + count];
		return (-1);
	}
	return (count);
}

/**
 * write_char - write a character to buffer
 * @buf: the buffer to write to
 * @v_ls: list of arguments to function
 * Return: No Value
 */
int write_char(buffer *buf, va_list v_ls)
{
	char v_temp = va_arg(v_ls, int);

	write_and_clear_buffer(buf);
	buf->content[buf->index] = v_temp;
	increase_buffer(buf);
	buf->content[buf->index] = '\0';
	return (1);
}

/**
 * write_string - writes a string to buffer
 * @buf: the buffer to write to
 * @v_ls: the list of arguments to access
 * Return: No Value
 */
int write_string(buffer *buf, va_list v_ls)
{
	int i;
	char *v_temp = va_arg(v_ls, char *);

	if (v_temp == NULL)
		v_temp = "(null)";
	for (i = 0; v_temp[i]; i++)
	{
		write_and_clear_buffer(buf);
		buf->content[buf->index] = v_temp[i];
		increase_buffer(buf);
	}
	buf->content[buf->index] = '\0';
	return (1);
}

/**
 * write_percentage_sign - write a modulus symbol
 * @buf: the buffer to write to
 * @v_ls: the list of parameters that refers to ellipses
 * Return: No Value
 */
int write_percentage_sign(buffer *buf, va_list v_ls)
{
	(void)v_ls;

	write_and_clear_buffer(buf);
	buf->content[buf->index] = '%';
	increase_buffer(buf);
	buf->content[buf->index] = '\0';
	return (1);
}

/**
 * write_signed_integer - write a signed integer to the buffer
 * @buf: the buffer to write to
 * @v_ls: the list of input paramters to the function
 * Return: no Value
 */
int write_signed_integer(buffer *buf, va_list v_ls)
{
	int num;
	int unum;

	num = va_arg(v_ls, int);
	unum = num;
	if (num == 0)
	{
		buf->content[buf->index] = '0';
		increase_buffer(buf);
		return (1);
	}
	else if (num < 0)
	{
		buf->content[buf->index] = '-';
		increase_buffer(buf);
		unum = -num;
	}

	write_and_clear_buffer(buf);
	append_number_to_buffer(buf, unum);
	return (1);
}
