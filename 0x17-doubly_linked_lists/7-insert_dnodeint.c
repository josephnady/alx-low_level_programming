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
	dlistint_t *tmp, *new, *cur;
	unsigned int len = 0, i;

	cur = *h;
	while (cur != NULL)
	{
		len++;
		cur = cur->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	if (idx > len)
	{
		free(new);
		return (NULL);
	}
	if (idx == len)
	{
		free(new);
		return (add_dnodeint_end(&(*h), n));
	}
	tmp = *h;
	for (i = 0; i < idx && tmp != NULL; i++)
		tmp = tmp->next;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	new->next = tmp;
	tmp->prev = new;
	return (*h);
}
