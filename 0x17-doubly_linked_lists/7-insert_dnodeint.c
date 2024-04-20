#include "lists.h"
/**
 * insert_dnodeint_at_index - func to insert node at index
 * @h: pointer to the frst node in the list
 * @idx: index of the list where the new node should be added
 * @n: value assigned to the new node
 * Return: newlist after adding new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new, *cur = *h;
	unsigned int i, len = 0;

	while (cur->next != NULL)
	{
		len++;
		cur = cur->next;
	}

	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx != 1 && idx >= len)
	{
		return (add_dnodeint_end(h, n));
	}

	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;
	new->next = tmp;
	return (new);
}
