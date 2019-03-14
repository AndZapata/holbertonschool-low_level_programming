#include "3-calc.h"
/**
 * op_add - sum a and b
 * @a: first argument
 * @b: Second argument
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - diference betwen a and b
 * @a: First argument
 * @b: Second argument
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two arguments
 * @a: First argument
 * @b: Second argument
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two arguments
 * @a: First Argument
 * @b: Second Argument
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - module two arguments
 * @a: First Argument
 * @b: Second Argument
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
