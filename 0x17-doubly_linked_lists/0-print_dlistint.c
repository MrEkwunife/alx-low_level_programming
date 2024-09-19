#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly link list
 * @h: header pointer to dlistint_t
 *
 * Return: num of nodes in dlistint_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
