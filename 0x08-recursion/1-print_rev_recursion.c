#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Description: function _print_rev_recursion
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
		
	}
}