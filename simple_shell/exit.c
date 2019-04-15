#include "shell.h"
/**
 * exit_func - Function to exit in correct process close
 * @buf: Buffer of getline
 * @_args: Arguments tokenized
 * @path_str: Structure that keeps the PATH
 *
 * Return: No returns in this function
 */

void exit_func(char *buf, char **_args, paths_t *path_str)
{
	int num;

	num = 0;
	if (_strcmp(_args[0], "exit") == 0)
	{
		if (_args[1])
		{
			num = _atoi(_args[1]);
			if (num)
			{
				free(_args);
				free(buf);
				free_list(path_str);
				exit(num);
			}
		}
		free(buf);
		free_list(path_str);
		free(_args);
		exit(0);
	}
}
