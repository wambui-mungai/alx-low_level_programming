#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string to be checked
 * Return: converted number, or 0 if
 * one or more chars in the string b that is not 0/1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) + (*b - '0');
		b++;
	}
	return (num);
}
