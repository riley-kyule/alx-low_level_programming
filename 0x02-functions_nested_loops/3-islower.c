#include "main.h"

/**
 * _islower - checks for lowercase characters
 * c: Argument of function
 * Return: 0 || 1 for success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
