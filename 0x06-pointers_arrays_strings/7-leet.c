#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @s: This is a string
 * Return: The encoded string
 */

char *leet(char *s)
{
	int x = 0, y;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[x])
	{
		for (y = 0; y < 10; y++)
			if (s[x] == str[y];
			s[x] = subs[y];
		x++
	}

	return (s);
}
