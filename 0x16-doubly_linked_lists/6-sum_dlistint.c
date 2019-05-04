#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data in a double list
 * @head: Head of the list
 *
 * Return: The sum of all the data of a double list
 */

int sum_dlistint(dlistint_t *head)
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
