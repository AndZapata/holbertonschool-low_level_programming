#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: elements to print
 *
 * Return: The numbers of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (head == NULL)
		return (0);
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
