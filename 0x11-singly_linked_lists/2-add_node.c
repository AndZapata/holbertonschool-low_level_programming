#include "lists.h"
#include <string.h>
/**
 * _strlen - strlen
 *@s: length that cames from main.c
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int l;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * add_node - adds node at the beggining of a list
 * @head: elements to print
 * @str: string for use, have to be copy
 *
 * Return: The numbers of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
