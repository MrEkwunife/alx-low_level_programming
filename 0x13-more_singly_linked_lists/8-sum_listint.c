#include "lists.h"

/**
 * sum_listint - sum of nodes
 * @head: head of list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
