#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		if (head->str)
		{
			/* printf("%s\n",head->str); */
			free(head->str);
			/* printf("%s\n","str deleted"); */
		}
		free(head);
		head = temp;
	}
}
