#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beggining of a list
 * @head: Head of list
 * @n: Data
 *
 * Return: The address of the new element, or 0 if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	new_node->prev = NULL;
	return (new_node);
}
