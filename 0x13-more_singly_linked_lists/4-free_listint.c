#include "lists.h"
/**
 * free_listint - free a listint_list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
			head = next;
	}
}
