#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @n: constant integer
 * @separator: a string of char
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int y;
	char *z;

	va_start(x, n);

	y = 0;
	while (y < n)
	{
		z = va_arg(x, char *);
		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);
		if (separator != NULL)
		{
			if (y < n - 1)
				printf("%s", separator);
		}
		y++;
	}
	printf("\n");
	va_end(x);
}
