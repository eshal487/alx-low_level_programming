#include "lists.h"

/**
 * free_list - free the linked list
 * @head: head of the node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
