#include <holberton.h>
#include <stdio.h>
/**
 * function_name - int main(void) that means you don't have to return a value
 *
 * Description: The current file will print Holberton.
 * section header: int hol, that's the variable and putchar to print.
 * Return: to 0
 */

int main(void)
{
	int hol;

	for (hol = 'Holberton')
	{
		putchar(hol);
	}
	putchar('\n');
	return (0);
}
