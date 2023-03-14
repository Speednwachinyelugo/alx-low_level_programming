#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: unsigned int
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *j
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	j = (char *) malloc(size * sizeof(char));

	if (j == NULL)
		return (0);

	while (i < size)
	{
		j[i] = c;
		i++;
	}
	j[i] = '\0';

	return (j);
}
