#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: elements to print
 *
 * Return: The numbers of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
