#include "shell.h"

/**
 * _sigint - Function to anulate the ^C
 * @do_not: An integer that do nothing
 *
 * Return: No returns in this function
 */

void _sigint(int do_not)
{
	(void)do_not;
	write(STDOUT_FILENO, "\n", _strlen("\n"));
	/*clean the standard out*/
	fflush(stdout);
}

/**
 * _prompt - Function to open a prompt for shell
 * @av: Received arguments
 * @env: Find the environment
 *
 * Return: No returns in this function
 */

void _prompt(char **av, char *env[])
{
	char **_args;
	ssize_t bytes;
	size_t num_bs = 0;
	char *buf;
	paths_t *path_str;

	path_str = keeped_path(env);
	signal(SIGINT, _sigint);
	while (1)
	{
		if (isatty(0))
			write(STDOUT_FILENO, "", _strlen(""));
		buf = NULL;
		_args = (char **)malloc(sizeof(char *) * 1024);
		_args[1] = NULL;
		bytes = getline(&buf, &num_bs, stdin);
		if (bytes == -1)
		{
			free(buf);
			free_list(path_str);
			free(_args);
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		if (buf[0] != '\n' && buf[0])
		{
			parse_text(buf, _args);
			exit_func(buf, _args, path_str);
			ex_arg(av, _args, env, path_str);
		}
		free(_args);
		free(buf);
	}
	free(_args);
	free(buf);
	free(path_str->path);
}
