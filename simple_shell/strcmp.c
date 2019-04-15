#include "shell.h"
/**
 * _strcmp - show a table whit 9 multiplication
 * @s1: string1
 * @s2: string2
 *
 * Return: number acci code
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
