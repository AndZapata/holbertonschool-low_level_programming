#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints adds on 3 and 5 multiples
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	n = 0;

	for (a = 1; a < 1024; a++)
	{
		n = n + a;
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
