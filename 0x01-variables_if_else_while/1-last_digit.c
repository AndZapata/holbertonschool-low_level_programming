#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * funtion_name - if printf
 * Description - Prints greater than 5, less than 6, or equal to 0
 * section header: int n
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
/* If n is greater than 0 then prints positive */
	{
		printf("Last digit of  %d and is greater than 5\n", n);
	}
	else if (n == 0)
/* If n is equal to 0 then prints is zero */
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (n < 6)
/* If n is less than 0 then prints is negative */
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
