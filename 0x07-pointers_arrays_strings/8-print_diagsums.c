#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function definition
 * @a: the array to be used
 * @size: the size of the diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(i * size) + i];
		sum1 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sum, sum1);
}
