#include "lists.h"
/**
 * listint_len - number of elems in the list
 * @h: head of list
 *
 * Return: returns the no of elems in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
