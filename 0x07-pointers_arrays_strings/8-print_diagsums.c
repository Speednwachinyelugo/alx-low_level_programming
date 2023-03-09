#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: int
 * @size: int
 * Description: function print_diagsums
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int x, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			sum1 += a[x];
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			sum2 += a[x];
	}
	printf("%d, %d\n", sum1, sum2);
}
