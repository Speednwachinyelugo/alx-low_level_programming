#include "main.h"

/**
 * print_sign - Check the code
 * @n: input character
 * Description: The function is for print_sign
 * Return: Always 0
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		num = 0;
	}
	else
		(n < 0)
	{
		_putchar(-);
		num = -1;
	}
	return (num);
}
