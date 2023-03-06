#include "main.h"

/**
 * *_strchr - function declaration
 * @c: character to be found
 * @s: string to be searched
 * Description: find a character in a string
 *  * Return: a character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (s + i);
}

