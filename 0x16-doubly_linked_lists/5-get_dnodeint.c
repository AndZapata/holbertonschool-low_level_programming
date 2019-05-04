#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the n node of a double list
 * @head: Head of the list
 * @index: index of the node
 *
 * Return: index or 0 if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (count == index)
		return (head);
	return (get_dnodeint_at_index(head->next, index - 1));
}
