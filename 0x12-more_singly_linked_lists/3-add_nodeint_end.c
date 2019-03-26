#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: elements to print
 * @n: data that cames from structure
 *
 * Return: The numbers of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
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
