#include "main.h"

/**
 * print_sign - Prints number sign
 * @n: int for function argument
 * Return: 1 || 0 || -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchat('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
