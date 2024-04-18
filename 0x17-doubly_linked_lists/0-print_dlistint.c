#include "lists.h"

/**
 * print_dlistint - func to print dlinklist
 * @h: pointer to dlinklist head
 * Return: number of the dlinklist
 */
size_t print_dlistint(const dlistint_t *h)
{
	int b = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		b++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (b);
}

