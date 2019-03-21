#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: elements to print
 *
 * Return: The numbers of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %p\n", 0, h->str);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
