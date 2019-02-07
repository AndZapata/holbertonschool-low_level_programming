#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * is_positive - Check if a number is greater than 0
 * The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
