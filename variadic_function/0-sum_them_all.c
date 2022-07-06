#include <stdarg.h>
/**
* sum_them_all - sums all arguments passed
* @n: number of arguments
* Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(ptr, int);

		sum += num;
	}
	va_end(ptr);
	return (sum);
}
