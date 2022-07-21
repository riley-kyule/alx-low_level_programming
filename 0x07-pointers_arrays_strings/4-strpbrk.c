#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be search
 * @accept: the set of bytes to be searched fro
 * Return: A pointer to the matched byte,
 * NULL if no set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
