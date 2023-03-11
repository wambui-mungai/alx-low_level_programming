#include "main.h"

/**
 * *_memset - function definition
 * @s: pointer to a constant
 * @b: constant to be used
 * @n: maximum number of bytes
 * Description: fills a memory address with constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

