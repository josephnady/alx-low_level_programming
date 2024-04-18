#include "lists.h"

/**
 * add_dnodeint - func to append new node to the dlinklist
 * @head: pointer tot hte first node in th dlinklist
 * @n: the data to be stored in the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->prev != NULL)
		temp = temp->prev;
	temp->prev = new;
	new->next = temp;
	*head = new;
	return (new);
}
