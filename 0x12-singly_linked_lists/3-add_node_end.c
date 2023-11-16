#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 *
 * @head: head of linked list
 * @str: string to be stored in list
 *
 * Return: address of the new element, otherwise
 * NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	list_t *node;
	list_t *a = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	string = strdup(str);
	node->str = string;
	if (!(node->str))
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(string);
	if (a == NULL)
	{
		*head = node;
	}
	else
	{
		while (a->next)
			a = a->next;
		a->next = node;
	}
	node->next = NULL;
	return (node);
}
