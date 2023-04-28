#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @str: node to duplicate
 * Return: address to the new element or NULL if it fails
 */

size_t list_len(const list_t *h) 
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
