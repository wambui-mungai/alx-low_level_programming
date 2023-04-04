#include "lists.h"

/**
 * free_listint2 - it frees a listint_t list
 * @head: head of a list
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}

