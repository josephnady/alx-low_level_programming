#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	dlistint_t *temp;

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (*head);
}
