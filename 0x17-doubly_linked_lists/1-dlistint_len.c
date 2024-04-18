#include "lists.h"

/**
 * dlistint_len - func to print number of elements in dlistint_t list
 * @h: pointer to the head node of the dlinkedlist
 * Return: no. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
