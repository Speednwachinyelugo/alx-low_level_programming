#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * @dest: destination memory area
 * @src:source memory area
 * @n: The number of bytes
 * Description: function _memcpy()
 * Return: a pointer to the memory area @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
