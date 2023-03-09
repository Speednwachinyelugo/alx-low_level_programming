#include "main.h"

/**
 * is_prime - finds if @n is a prime number
 * @n: the number to be checked
 * @i: iterating number
 * Return: 1 if n is a prime number, and 0 if n is not a prime number
 */

int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - entry point
 * @n: the number to be checked
 * Description: function which finds prime number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
