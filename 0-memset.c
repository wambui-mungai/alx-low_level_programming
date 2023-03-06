#include "main.h"

/**
 * *_memset - function definition
 * @s: pointer to a constant
 * @b: constant to be used
 * @n: max nmber of bytes
 * Description: fills memory address with constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}

