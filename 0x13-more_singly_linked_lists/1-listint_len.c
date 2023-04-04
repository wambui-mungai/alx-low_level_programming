#include "lists.h"

/**
 * listint_len - Return the number of elements
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *new_node = h;

	while (new_node->next != NULL)
		i++;
	return (i);
}
