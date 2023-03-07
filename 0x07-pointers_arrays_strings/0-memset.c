#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to
 * @s: A pointer to the memory area to be filled
 * @b: The character
 * @n: The number of bytes to be filled
 * Description: functiomn _isalpha()
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
