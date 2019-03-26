#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: elements to print
 *
 * Return: The numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
