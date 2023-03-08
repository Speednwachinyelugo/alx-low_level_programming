#include "main.h"

/**
 * _stpbrk - entry point
 * @s: The string
 * @: The set of bytes
 * Description: function _stpbrk
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (&s[a]);
			b++;
		}
		a++;
	}
	return ('\0');
}
