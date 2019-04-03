#include "holberton.h"

/**
 * main - Entry point
 * @av: name of the file to create
 * @ac: letteres to be printed
 * Return: Always 1 (Success).
 */
int main(int ac, char *av[])
{
	int file_from, len = 0, file_to, wf = 0, conf;
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
	while (len != 0)
	{
		wf = write(file_to, buffer, len);
		if (file_to == -1 || wf == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", av[2]),
				exit(99);
		len = read(file_from, buffer, 1024);
		if (file_from == -1 || len == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]),
				exit(98);
	}
	len = close(file_from);
	conf = close(file_to);
	if (conf == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", conf), exit(100);
	if (len == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", len), exit(100);
	return (0);
}
