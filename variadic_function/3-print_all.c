#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
* print_all - print anything;
* @format : char, interger, float, char
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int count = 0, n = 0;
	char *sep;
	char *str;

	sep = ", ";
	va_start(list, format);

	while (format && format[count] != '\0')
		count++;
	while (format && format[n] != '\0')
	{
		if (n == (count - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sep);
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
	n++;
	}
	printf("\n");
	va_end(list);
}
