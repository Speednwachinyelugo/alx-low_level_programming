#include "main.h"

/**
 * _isalpha - Check the code
 * @c: input character
 * Description: The function checks for _isalpha
 * Return: Always 0
 */

int _isalpha(int c)
{
	char i, j;
	int letter = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (c == i || c == j)
				letter = 1;
		}
	}
	return (letter);
}
