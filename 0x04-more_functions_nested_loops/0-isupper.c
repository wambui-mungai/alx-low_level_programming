#include <stdio.h>
/**
 * main - checks for uppercase character
 * @c: first member
 * Return:1 if c is uppercase, 0 if otherwise
 *
 */

int _isupper(int c)
{


	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
