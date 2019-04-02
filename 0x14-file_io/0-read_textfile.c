#include "holberton.h"

/**
 * read_textfile - function that read a text file and prints
 * @filename: name of the file to create
 * @letters: letteres to be printed
 * Return: Always 1 (Success).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, len = 0, wr = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(letters));
	if (buf == NULL)
	{
		close(file);
		return (0);
	}
	len = read(file, buf, letters);
	if (len == -1)
	{
		close(file);
		return(0);
	}
	wr = write(STDOUT_FILENO, buf, len);
	if (wr == -1)
	{
		close(file);
		return(0);
	}
	close(file);
	return (len);
}
