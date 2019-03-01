#include "holberton.h"
/**
 * aux - prints a factorial
 * @x: the operator
 * @n: is a integer
 * Return: always 0
 */
int aux(int x, int n)
{
	if (n < 2)
		return (0);
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);
	return (aux(x + 1, n));
}

/**
 * is_prime_number - prints the function aux
 * @n: an integer
 * Return: aux function
 */

int is_prime_number(int n)
{
	return (aux(2, n));
}
