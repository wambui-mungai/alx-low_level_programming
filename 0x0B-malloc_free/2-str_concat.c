#include "main.h"
#include <stdlib.h>

/**
 * str_concat - is a function that concatenates two strings
 * @s1: is the first string input
 * @s2: is the second string input
 * Return: a pointer that contains two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int length = 0, len = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[length] != '\0')
	{
		length++;
	}

	while (s2[len] != '\0')
	{
		len++;
	}

	s = (char *) malloc(sizeof(char) * (length + len + 1));
	if (s == 0)
		return (0);

	for (i = 0; i < length; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
