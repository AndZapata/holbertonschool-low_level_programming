#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 *@s: string that cames from main.c
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int temp = 0;
	int len;
	int i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
