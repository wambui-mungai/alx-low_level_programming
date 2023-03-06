/**
 * *_strpbrk - function definition
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to matched byte or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
