#include "main.h"
#include <stdio.h>

/**
 * factorial: returns factorial of a number
 * @n: the number whose factorial is needed
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (n * factorial(n-1));
}

