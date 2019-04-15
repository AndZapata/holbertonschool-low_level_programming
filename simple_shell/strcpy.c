#include "shell.h"
/**
 * _strcpy - show a table whit 9 multiplication
 *@dest: string dest
 *@src: string source
 *
 * Return: char of strings
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
