#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints adds on 3 and 5 multiples
 * Return: Always 0
 */
int main(void)
{
	int a;
	long n;
	long s;
	long z;

	n = 1;
	s = 2;
	printf("%lu, %lu", n, s);
	for (a = 0; a <= 47; a++)
	{
			z = n + s;
			n = s;
			s = z;
			printf(", %lu", z);
	}
	printf("\n");
	return (0);
}
