#include "holberton.h"

/**
 * main - Entry point
 * @av: name of the file to create
 * @ac: letteres to be printed
 * Return: Always 1 (Success).
 */
int main(int ac, char *av[])
{
	int file_from, len = 0, file_to, conf;
	char buffer[1024];

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
		return (STDOUT_FILENO);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
		return (STDERR_FILENO);
	}
	len = read(file_from, buffer, 1024);
	if (len == -1)
	{
		close(file_from);
		return (-1);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		printf("Error: Can't read from file %s\n", av[2]);
		exit(99);
		return (STDERR_FILENO);
	}
	write(file_to, buffer, len);

	conf = close(file_to);
	if (conf == -1)
	{
		printf("Error: Can't close fd %d\n", conf);
		exit(100);
		return (STDERR_FILENO);
	}
	return (STDOUT_FILENO);
}
