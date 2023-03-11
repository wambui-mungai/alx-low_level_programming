#include "main.h"

/**
 * *_strstr - function definition
 * @haystack: that string that will be searched
 * @needle: the substring to search for
 * Description: search for needle in haystack
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	char *hs = haystack;
	char *n = needle;

	while (*hs)
	{
		n = needle;
		hs = haystack;
		while (*n)
		{
			if (*hs == *n)
			{
				n++;
				hs++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
