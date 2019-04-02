#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: Always 1 (Success).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND, 0600);
	if (text_content == NULL)
		return (1);
	if (file == -1)
		return (-1);
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);
	return (1);
}
