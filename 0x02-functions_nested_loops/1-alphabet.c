#include "main.h"

/**
 * print_alphabet - Prints letters of the alphabet
 * Return: ALways 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
