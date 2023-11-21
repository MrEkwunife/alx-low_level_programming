#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: the index position
 * @n: number for node
 *
 * Return: returns address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
