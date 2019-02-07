#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main = Entry point
 *
 *return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
/* If n is greater than 0 then prints positive */
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
/* If n is equal to 0 then prints is zero */
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
/* If n is less than 0 then prints is negative */
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
