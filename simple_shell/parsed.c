#include "shell.h"

/**
 * parse_text - Function to parse a string by their tokens
 * @str: String received to be parsed
 * @_args: String parsed by strtok function
 *
 * Return: No returns, just dest to allocate the string
 */

void parse_text(char *str, char **_args)
{
	const char delim[] = " \n\"";
	char *dest = NULL;
	int iter = 0;

	dest = strtok(str, delim);
	while (dest)
	{
		_args[iter] = dest;
		dest = strtok(NULL, delim);
		iter++;
	}
	_args[iter] = NULL;
}
