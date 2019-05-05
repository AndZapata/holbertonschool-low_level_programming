#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 * @head: Head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if success -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int data = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (data < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		data++;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
