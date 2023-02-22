#include "main.h"

/**
 * _islower - Check the code
 * @c: input character
 * Description: The function checks for lowercase letter
 * Return: Always 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}
	return (lower);
}
