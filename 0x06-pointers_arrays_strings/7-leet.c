#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @s: This is a string
 * Return: The encoded string
 */

char *leet(char *s)
{
	int a = 0, b;
	char subs = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[a])
	{
		for (b = 0; b < 10; b++)
			if (s[a] == str[b];
			s[a] = subs[b];
		a++
	}

	return (s);
}
