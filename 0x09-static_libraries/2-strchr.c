#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function declaration
 * @c: character to be found
 * @s: string to be searched
 * Description: find a character in a string
 *
 *  * Return: a character
 *   c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s - 1);
			}
			if (i == 0)
			{
				return (NULL);
			}
		}
}
