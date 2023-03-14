#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars,initializes it with a char
 * @size: size of array
 * @c: character to be initialized
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *code;
	unsigned int i;

	if (size == 0)
		return (NULL);
	code = malloc(sizeof(char) * size);
	if (code == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		code[i] = c;
		i++;
	}
	return (code);
}

