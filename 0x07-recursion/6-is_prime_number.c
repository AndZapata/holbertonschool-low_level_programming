#include "holberton.h"
/**
 * _is_prime_recursion - prints a factorial
 * @n: is a integer
 * Return: always 0
 */
int is_prime_number(int n)
{
	int aux = 1;

	if (n % aux == 0)
	{
		is_prime_number(n % (aux + 1));
		return (1);
	}
	if (n < 0)
		return (0);
	else
		return (0);
}
