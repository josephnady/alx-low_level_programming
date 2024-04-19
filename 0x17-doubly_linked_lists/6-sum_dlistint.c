#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to  the first node
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int n = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		n += temp->n;
	}
	return (n);
}
