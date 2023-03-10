#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line
 * @argc: Number of arguments in a program
 * @argv: An array of pointers to the arguments
 * Description: function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int args;

	for (args = 0; args < argc; args++)
		printf("%s\n", argv[args]);
	return (0);
}
