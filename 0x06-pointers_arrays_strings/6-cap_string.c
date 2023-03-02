#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 90 && str[a] <= 120)
		{
			if (a == 0)
				str[a] -= 32;

			if (str[a - 1] == 32 || str[a - 1] == 9 ||
			str[a - 1] == 10 || str[a - 1] == 44 || str[a - 1] == 59 ||
			str[a - 1] == 46 || str[a - 1] == 33 || str[a - 1] == 63 ||
			str[a - 1] == 34 || str[a - 1] == 40 || str[a - 1] == 41 ||
			str[a - 1] == 123 || str[a - 1] == 124)
				str[a] -= 32;
		}
		a++;
	}
	return (str);
}

