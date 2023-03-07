#include "main.h"

/**
 * memset - fills the first n bytes of the memory area pointed to by @s with the constant byte @b
 * @s: A pointer to the memory area to be filled
 * @b: The character
 * @n: The number of bytes to be filled
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (memory);
}
