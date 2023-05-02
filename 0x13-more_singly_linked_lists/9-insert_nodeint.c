#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to 1st node
 * @idx: index where new node is added
 * @n: data to insert at the new node
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int x;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (x = 0; temp && x < idx; x++)
	{
	if (x == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	else
		temp = temp->next;
	}
	return (NULL);
}
