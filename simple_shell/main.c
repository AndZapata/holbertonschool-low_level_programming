#include "shell.h"
/**
 * main - Entry Point
 * @ac: counter of arguments
 * @av: arguments received in shell
 * @env: environment
 *
 * Return: Always 0 (success)
 */
int main(int ac, char **av, char *env[])
{
	(void)ac;
	(void)av;
	_prompt(av, env);

	return (0);
}
