#include "shell.h"
/**
 * _atoi - changes a string into an integer
 * @str: string recived to convert
 *
 * Return: and integer os a string of digits
 */
int _atoi(char *str)
{
	unsigned int add = 0, iter = 0, negative = 1;

	if (str[iter] != 0)
	{
		for (iter = 0; (str[iter] < '0' || str[iter] > '9'); iter++)
		{
			if (str[iter] == '-')
				negative = negative * -1;
		}
		for (; (str[iter] >= '0' && str[iter] <= 57); iter++)
		{
			add = add * 10 - ((int)str[iter] - '0');
		}
	}
	negative = negative * -1;
	return (add * negative);
}
