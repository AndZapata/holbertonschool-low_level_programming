#include "lists.h"

/**
 * sum_listint - delete the head node of a list
 * @head: elements to print
 *
 * Return: The numbers of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
