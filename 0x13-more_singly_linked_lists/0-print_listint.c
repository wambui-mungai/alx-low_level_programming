#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: data type pointer of a struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->next);
		i++;
	}
	return(i);
}

