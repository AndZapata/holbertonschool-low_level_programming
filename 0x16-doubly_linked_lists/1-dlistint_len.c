#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a double list
 * @h: Node
 *
 * Return: The number of elements in a linked double list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
