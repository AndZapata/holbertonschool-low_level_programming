#include "lists.h"

/**
 * add_nodeint - adds node at the beggining of a list
 * @head: elements to print
 * @n: data that cames from structure
 *
 * Return: The numbers of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
