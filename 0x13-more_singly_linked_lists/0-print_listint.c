#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the members of the linked list
 * @h: member of the linked list
 *
 * Return: number of elems in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{

		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}

