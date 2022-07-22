#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: Number of command line arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
