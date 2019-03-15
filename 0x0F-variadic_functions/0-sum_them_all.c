#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all the parameters
 * @n: constant integer
 *
 * Return: sums
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y;
	int z = 0;

	va_start(x, n);
	y = 0;

	if (n == 0)
		return (0);
	while (y < n)
	{
		z += va_arg(x, int);
		y++;
	}
	va_end(x);

	return (z);
}
