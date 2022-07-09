#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *_print_number - print number
 * @list: argument number
 * Return: 1
 */

int _print_number(va_list list)
{
	int size_number = 0;
	int myNumber = va_arg(list, int);
	int tmp_number = myNumber;
	int *tab = NULL;
	int diviseur = myNumber;
	int reste = 0;
	int counter_size_number = 0;

	if (tmp_number < 0)
	{
		_putchar('-');
		myNumber = _abs(tmp_number);
	}
	do {
		tmp_number = tmp_number / 10;
		++size_number;
	} while (tmp_number != 0);
	tab = malloc(size_number * sizeof(int));

	while (diviseur > 0)
	{
		reste = diviseur % 10;
		tab[counter_size_number] = reste;
		diviseur = diviseur / 10;
		counter_size_number++;
	}

	while (counter_size_number > 0)
	{
		_putchar(tab[--counter_size_number] + '0');
	}
	return (size_number);
}
