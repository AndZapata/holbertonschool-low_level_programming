#include "function_pointers.h"

/**
 * print_name - function that print the name
 * @name: name that cames from main.c
 * @f: the function that print_name
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
