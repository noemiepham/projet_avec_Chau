#include "main.h"

/**
 * _abs - print out the absolute value of number
 * @n: number
 * Return: int absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
