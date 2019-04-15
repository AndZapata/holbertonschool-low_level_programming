#include "shell.h"
/**
 * ex_arg - Function to execute process to child process
 * @av: Arguments received on prompt.
 * @_args: Arguments tokenized.
 * @env: Environment.
 * @path_str:
 *
 * Return: No returns in this function
 */
void ex_arg(char **av, char **_args, char **env, paths_t *path_str)
{
	int execute, status = 0;
	pid_t pid;
	/**
	 * Forkin a child
	 */
	_path(_args, path_str);
	pid = fork();

	if (pid == -1)
	{
		perror("Fork failed");
		exit(1);
	}
	else if (pid == 0)
	{
		execute = execve(_args[0], _args, env);
		if (execute < 0)
		{
			write(STDERR_FILENO, av[0], _strlen(av[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, "1", 1);
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, _args[0], _strlen(_args[0]));
			write(STDERR_FILENO, ": not found\n", 13);
			exit(127);
		}
		exit(0);
	}
	else
	{
		wait(&status);
	}
}
