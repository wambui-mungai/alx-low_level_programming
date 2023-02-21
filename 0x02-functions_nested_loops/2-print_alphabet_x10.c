#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)

{
	char c;
	int a = 0;

	a = 1;
	while (a++ <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	}

	_putchar('\n');
}
