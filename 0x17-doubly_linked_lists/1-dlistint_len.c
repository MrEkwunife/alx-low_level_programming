/*
 * file: 1-dlistint_len.c
 * Auth: Chimobi E
 */

#include "lists.h"

/**
 * dlistint_len - calcs the length of a nodelist
 * @h: node's head pointer
 *
 * Return: len of nodelist
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
