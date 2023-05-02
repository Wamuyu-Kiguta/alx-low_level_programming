#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: 1st node in list
 * @index: index of the node to return
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int x = 0;

	while (temp && x < index)
	{
	temp = temp->next;
	x++;
	}
	return (temp ? temp : NULL);
}
