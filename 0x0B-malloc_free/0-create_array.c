#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: unsigned int
 * @c: char
 * Description: function create_array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *p
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
