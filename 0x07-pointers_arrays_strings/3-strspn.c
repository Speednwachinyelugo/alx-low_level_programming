#include "main.h"

/**
 * _strspn - entry point
 * @s: initial segment
 * @accept: source
 * Description: function _strspn
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, sum = 0;

	while (s[a] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				sum += 1;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (sum);
}
