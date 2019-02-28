#include "holberton.h"
/**
 * is_palindrome - prints a palindrome
 * @s: is a integer
 * Return: always 0
 */
int is_palindrome(char *s)
{
	int aux = 1;

	if (s % aux == 0)
	{
		is_prime_number(s % (aux + 1));
		return (1);
	}
	if (s < 0)
		return (0);
	else
		return (0);
}
