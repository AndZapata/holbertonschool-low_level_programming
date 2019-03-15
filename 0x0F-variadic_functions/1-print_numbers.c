#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all the parameters
 * @n: constant integer
 * @separator: a string of char
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;
	int z = 0;

	va_start(x, n);
	if (separator == NULL)
		return;
	y = 0;
	while (y < n)
	{
		z = va_arg(x, int);
		printf("%i", z);
		if (y < n - 1)
			printf("%s", separator);
		y++;
	}
	printf("\n");
	va_end(x);
}
