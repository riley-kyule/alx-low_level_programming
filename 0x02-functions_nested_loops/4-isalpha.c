#include "main.h"

/**
 * _isalpha - Check for alphabet characters
 * @c: int used for argument function
 * Return: 0 || 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
