#include "lists.h"

/**
 * add_node_end - adds a node to a singly linked list
 * @head: pointer to head of the list
 * @str: data to store
 * Return: pointer to new elemnt
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
