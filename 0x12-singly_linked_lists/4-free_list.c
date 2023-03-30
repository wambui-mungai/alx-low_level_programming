#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}

