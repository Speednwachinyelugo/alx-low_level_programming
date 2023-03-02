#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @src: This string is to be appended to @dest
 * @dest: The pointer to the string to be concatenated on
 * @n: an integer
 * Description: function _strcat concatenates two strings
 * Return: A pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != src[n])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
