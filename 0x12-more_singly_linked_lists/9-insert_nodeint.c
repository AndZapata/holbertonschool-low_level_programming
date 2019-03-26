#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in the position given
 * @head: elements to print
 * @idx: Position
 * @n: data
 *
 * Return: The numbers of nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (head == NULL)
		return (new_node);

	if (idx == 0)
	{
		new_node->next = *head;
		return (new_node);
	}

	current_node = *head;
	while (idx - 1 > 0)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
		idx--;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
