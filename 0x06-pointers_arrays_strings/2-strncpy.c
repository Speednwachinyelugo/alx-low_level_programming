#include "main.h"

/**
 * _strncpy - This function copies a string
 * @src: This is a string
 * @dest: This is a string
 * @n: an integer
 * Return: A pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
