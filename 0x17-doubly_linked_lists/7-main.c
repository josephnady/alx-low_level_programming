#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, -1);
    add_dnodeint_end(&head, -2);
    add_dnodeint_end(&head, -402);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, -111);
    insert_dnodeint_at_index(&head, 3, 333);
    insert_dnodeint_at_index(&head, 8,-8888);
    insert_dnodeint_at_index(&head, 15, 9999);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
