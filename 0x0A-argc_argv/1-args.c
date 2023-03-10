#include <stdio.h>

/**
 * main - entry point
 * @argc: Number of arguments in a program
 * @argv: An array of pointers to the arguments
 * Description: function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
