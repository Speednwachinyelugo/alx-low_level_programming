#include "main.h"

/**
 * _strstr - entry point
 * @haystack: string
 * @needle: substring
 * Description function _strstr
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b;

	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] != '\0' && haystack[a + b] == needle[b])
			b++;
		if (needle[b] == '\0')
			return (&haystack[a]);
		a++;
	}
	return ('\0');
}
