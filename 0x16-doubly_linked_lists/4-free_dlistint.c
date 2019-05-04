#include "lists.h"

/**
 * free_dlistint - Frees a double linked list
 * @head: Head of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
