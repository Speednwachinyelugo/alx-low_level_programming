#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - entry point
* @b: unsigned int
* Description: function malloc_checked
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	int *newMemory;

	newMemory = malloc(b);

	if (newMemory == NULL)
		exit(98);

	return (newMemory);
}
