#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @x: int for argument of function
 * Return: 0
 */
int print_last_digit(int x)
{
	int a;

	if (x < 0)
		x = -x;

	a = x % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
