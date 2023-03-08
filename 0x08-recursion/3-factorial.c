#include "main.h"

/**
 * factorial - function definition
 * @n: number
 * Description: find factorial of n
 * Return: factor or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
