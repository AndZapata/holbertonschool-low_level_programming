#include "lists.h"

/**
 * free_list - free a list
 * @head: elements to print
 *
 * Return: The numbers of nodes
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
