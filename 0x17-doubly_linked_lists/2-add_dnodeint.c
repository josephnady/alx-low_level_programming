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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
