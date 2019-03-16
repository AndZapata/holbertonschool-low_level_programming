#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of the types of the arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list x;
	int y;
	char *z;

	va_start(x, format);
	y = 0;
	while (format[y] != 0)
	{
		switch (format[y])
		{
		case 'c':
			printf("%c", va_arg(x, int));
			break;
		case 'i':
			printf("%i", va_arg(x, int));
			break;
		case 'f':
			printf("%f", va_arg(x, double));
			break;
		case 's':
			z = va_arg(x, char *);
			if (z == NULL)
			{
				printf("%p", z);
				break;
			}
			printf("%s", z);
			break;
		default:
			y++;
			continue;
		}
		if (format[y + 1] != 0)
			printf(", ");
		y++;
	}
	printf("\n");
	va_end(x);
}
