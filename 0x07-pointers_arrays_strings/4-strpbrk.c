#include "main.h"

/**
 *
 * _stpbrk - entry point
 * @s: The string
 * @: The set of bytes
 * Description: function _stpbrk
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}

		s++;
	}

	return ('\0');
}
