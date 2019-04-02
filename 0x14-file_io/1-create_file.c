#include "holberton.h"

/**
 * create_file - function that creates a text file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: Always 1 (Success).
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (file == -1)
	{
		printf("File can not be created.\n");
		exit(1);
	}
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);
	return (1);
}
