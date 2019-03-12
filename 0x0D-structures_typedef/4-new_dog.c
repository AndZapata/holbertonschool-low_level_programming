#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - copy an string from main
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int y;

	if (str == 0)
		return (0);
	for (len = 0; str[len]; len++)
	{
	}
	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	for (y = 0; y < len; y++)
		copy[y] = str[y];
	copy[y] = 0;
	return (copy);
}
/**
 * new_dog - copy an string from main
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == 0)
		return (0);
	n_dog->name = _strdup(name);
	if (n_dog->name == 0)
		free(n_dog);
	n_dog->age = age;
	n_dog->owner = _strdup(owner);
	if (n_dog->owner == 0)
	{
		if (n_dog->name != 0)
			free(n_dog->name);
		free(n_dog);
	}
	return (n_dog);
}
