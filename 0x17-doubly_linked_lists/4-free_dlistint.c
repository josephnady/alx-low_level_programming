#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
