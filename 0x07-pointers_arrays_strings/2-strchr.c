#include "main.h"

/**
 * _strchr - entry point
 * @s: A string
 * @c: The character
 * Description: function _strchr
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (&s[j]);
		j++;
	}

	if (s[j] == c)
		return (&s[j]);
	return ('\0');
}
