#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
* print_strings - fuction print string with separator
* @n: number agrument
* @separator: string character separator
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	char *string;

	va_list list;

	if (separator == NULL || *separator == 0)
	sep = " ";
	else
	sep = (char *)separator;
	va_start(list, n);
	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s%s", sep, string);
	}
	printf("\n");
	va_end(list);
}
