#include "lists.h"

/**
 * delete_nodeint_at_index - insert a new node in the position given
 * @head: elements to print
 * @index: Position
 *
 * Return: The numbers of nodes
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int data = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (data < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		data++;
	}
	current = temp->next->next;
	free(temp->next);
	temp->next = current;
	return (1);
}
