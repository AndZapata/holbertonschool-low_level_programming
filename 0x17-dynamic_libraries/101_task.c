#include <stdlib.h>
/**
 * rand - function to tell the machine that you have win the lotery
 * Description: No parameters received in this function
 *
 * Return: numbers
 */
int rand()
{
	static int idx = 0;
	int numbers[] = {0, 8, 8, 7, 9, 23, 74};

	idx++;
	return (numbers[idx]);
}
