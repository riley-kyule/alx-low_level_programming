#include "main.h"

/**
 * _strncpy - copies a string
 * @src: Source string
 * @dest: destination string
 * @n: number of bytes to copy
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
