#include "main.h"

/**
 * _strcat - This concatenates two strings
 * @src: This string is to be appended to @dest
 * @dest: The pointer to the string to be concatenated on
 * Description: function _strcat
 * Return: A pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
