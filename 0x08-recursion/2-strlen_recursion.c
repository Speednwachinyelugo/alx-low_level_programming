#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Description: function _strlen_recursion
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0

	if (*s)
	{
		len += _strlen_recursion(s + 1);
		len++;
	}
	return (len)
}
