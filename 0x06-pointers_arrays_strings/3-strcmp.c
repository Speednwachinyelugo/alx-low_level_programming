#include "main.h"

/**
 * _strcmp - This function compares a string
 * @s1: This is a string
 * @s2: This is a string
 * Return: The difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
