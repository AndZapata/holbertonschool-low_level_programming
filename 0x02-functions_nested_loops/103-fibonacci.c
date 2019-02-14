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
	long x;

	n = 1;
	s = 2;
	x = 2;
	for (a = 0 ; a < 35 ; a++)
	{
		z = n + s;
		n = s;
		s = z;
		if (z % 2 == 0)
			x = x + z;

	}
	printf("%lu\n", x);
	return (0);
}
