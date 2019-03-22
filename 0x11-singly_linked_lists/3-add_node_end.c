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
 * add_node_end - adds node at the end of a list
 * @head: elements to print
 * @str: string for use, have to be copy
 *
 * Return: The numbers of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
