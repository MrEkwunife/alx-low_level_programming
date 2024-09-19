/*
 * File: 3-add_dnodeint_end.c
 * Auth: Chimobi E
 */

#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to end of nodelist
 * @head: pointer to the node head pointer
 * @n: node data of type int
 *
 * Return: address of new node for success else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
