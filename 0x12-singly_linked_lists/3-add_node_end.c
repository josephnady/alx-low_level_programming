#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	/*traverse the linked list*/
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (*head);
}
