#include "3-calc.h"
/**
 * main - Entry Point
 * @argc: argument counter
 * @argv: argument values on the array
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*c)(int a, int b);
	int d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || c == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	d = c(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", d);
	return (0);
}
