#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at a given posit
 * @h: The list
 * @idx: index of the node to put on
 * @n: Data
 *
 * Return: The address of the new node or 0 if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	if (h == NULL)
		return (new_node);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));
	current_node = *h;
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
