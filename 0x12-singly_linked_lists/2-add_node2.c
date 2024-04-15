#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	
	if ( *head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
