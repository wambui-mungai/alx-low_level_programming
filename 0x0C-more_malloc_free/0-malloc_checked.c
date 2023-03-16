#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes amount
 * Return: pointer to allocated memory
 *         if malloc fails exit with 98
 */

void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);
	if (alloc_mem == NULL)
		exit(98);
	return (alloc_mem);
}

