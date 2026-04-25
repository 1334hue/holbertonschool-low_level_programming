#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer for the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (!temp && i == idx)
		return (add_dnodeint_end(h, n));
	if (!temp)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}
