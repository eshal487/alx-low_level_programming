#include "lists.h"

/**
 * print_listint - print all the elements
 * @h: head
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

