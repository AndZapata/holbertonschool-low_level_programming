#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: argument counter
 * @argv: argument values on the array
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
