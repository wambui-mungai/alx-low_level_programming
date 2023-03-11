#include "main.h"

/**
 * _strspn - function definition
 * @s: the string to search
 * @accept: the prefic substring to be tested
 * Description: returns number of bytes in s
 * consists of only bytes from accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}

