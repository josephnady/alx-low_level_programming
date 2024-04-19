#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at selected index
 * @head: pointer to the first node
 * @index: index for the node to be got
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int len = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index > len)
		return (NULL);

	for (i = 0; i < index && head->next != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
