#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers until 98
 * @n: prints the function from main.c
 * Description: print numbers until 98
 */
void print_to_98(int n)
{
	int x;

	if (n == 98)
	{
		printf("98\n");
	}

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x == 98)
			{
			}
			else
			{
			printf(", ");
			}
		}
		printf("\n");
	}
	if (n > 98)
	{
		for(x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x == 98)
			{
			}
			else
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
