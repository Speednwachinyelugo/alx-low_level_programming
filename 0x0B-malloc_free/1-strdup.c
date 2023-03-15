#include "main.h"
#include <stdio.h>

/**
 * _strdup - entry point
 * @str: string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplicate;
	int j, len = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		duplicate[j] = str[j];

	duplicate[len] = '\0';

	return (duplicate);
}
