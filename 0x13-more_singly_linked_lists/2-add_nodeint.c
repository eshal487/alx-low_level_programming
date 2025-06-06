#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if its failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
