#include "holberton.h"

/**
 * main - Entry point
 * @av: name of the file to create
 * @ac: letteres to be printed
 * Return: Always 1 (Success).
 */
int main(int ac, char *av[])
{
	int file_from, file_to;
	ssize_t len = 1024, wr;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	len = read(file_from, buffer, 1024);
	if (len == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]), exit(98);
	while (len != '\0')
	{
		wr = write(file_to, buffer, len);
		if (file_to == -1 || wr != len)
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", av[2]),
				exit(99);
		len = read(file_from, buffer, 1024);
		if (file_from == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]),
				exit(98);
	}
	len = close(file_from);
	wr = close(file_to);
	if (wr == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", file_to), exit(100);
	if (len == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", file_from), exit(100);
	return (0);
}
