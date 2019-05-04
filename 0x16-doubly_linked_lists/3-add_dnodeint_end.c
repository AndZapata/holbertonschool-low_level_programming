#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a double list
 * @head: Head of the list
 * @n: Data
 *
 * Return: The address of the new element, or 0 if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		aux = *head;
		aux->prev = NULL;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
