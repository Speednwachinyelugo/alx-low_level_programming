#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: number
 * Description: function _sqrt
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
