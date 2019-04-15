#include "shell.h"

/**
 * free_list - Function to free a list
 * @hd: starting point on structure
 *
 * Return: Nothing
 */

void free_list(paths_t *hd)
{
	paths_t *temp;

	while (hd)
	{
		temp = hd->next;
		free(hd->path);
		free(hd);
		hd = temp;
	}
}

/**
 * free_parsed - Function to free arguments allocated in malloc
 * @_args: Arguments to be free
 *
 * Return: No returns in this function
 */

void free_parsed(char **_args)
{
	if (_args)
		free(_args);
}
