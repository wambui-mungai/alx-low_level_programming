#include "lists.h"
/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: integer value
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		i = (*head)->n;
		free(*head);
	}
	*head = temp;
	return (i);
}

