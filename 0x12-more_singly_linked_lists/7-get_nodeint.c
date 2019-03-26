#include "lists.h"

/**
 * get_nodeint_at_index - returns the n node of a list
 * @head: elements to print
 * @index: index of the node
 *
 * Return: The n node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (count == index)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
