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
	int diviseur = 0;
	int reste = 0;
	int counter_size_number = 0;

	if (tmp_number == 0)
		_putchar('0'); /* printf condition numero 0 */
	if (tmp_number < 0)
	{
		_putchar('-');
		myNumber = _abs(tmp_number);
		size_number = 1; /* count signe '-' */
	}
	diviseur = myNumber;
	do {
		tmp_number = tmp_number / 10;
		++size_number; /*count size de number for create memory static */
	} while (tmp_number != 0);
	tab = malloc(size_number * sizeof(int));  /* array contient de numero */

	while (diviseur > 0)
	{
		reste = diviseur % 10;
		tab[counter_size_number] = reste;  /* array number */
		diviseur = diviseur / 10;
		counter_size_number++; /* count size de number for reverstring */
	}

	while (counter_size_number > 0) /*reverser array de number */
	{
		_putchar(tab[--counter_size_number] + '0');
	}
	free(tab);
	return (size_number);
}
