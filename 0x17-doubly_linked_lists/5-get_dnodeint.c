#include "lists.h"

/**
 * get_dnodeint_at_index -  func
 * @head: pointer
 * @index: index
 * Retrun: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head->next != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
