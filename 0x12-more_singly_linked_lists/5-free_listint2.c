#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: elements to print
 *
 * Return: The numbers of nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
