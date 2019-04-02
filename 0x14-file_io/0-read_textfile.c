#include "holberton.h"

/**
 * read_textfile - function that read a text file and prints
 * @filename: name of the file to create
 * @letters: letteres to be printed
 * Return: Always 1 (Success).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(letters));
	if (buf == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (-1);

	len = read(file, buf, letters);
	write(STDOUT_FILENO, buf, len);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	close(file);
	return (len + 1);
}
