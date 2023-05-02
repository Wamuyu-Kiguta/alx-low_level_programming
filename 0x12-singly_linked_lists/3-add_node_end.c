#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: node to duplicate
 * Return: address to the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *dup;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	dup = malloc(sizeof(list_t));
	if (!dup)
	return (NULL);
	dup->str = strdup(str);
	dup->len = len;
	dup->next = NULL;
	if (*head == NULL)
	{
	*head = dup;
	return (dup);
	}

	while (temp->next)
	temp = temp->next;
	temp->next = dup;

	return (dup);
}
