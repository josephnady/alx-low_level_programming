#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t print_list(const list_t *h)
{
	int n = 0;
	while(h != NULL)
	{
		if (h->str == NULL)
			printf("%s\n","[0] (nil)");
		else
			printf("[%d] (%s)\n",h->len,h->str);
		n++;
		h = h->next;
	}
	return (n);
}
