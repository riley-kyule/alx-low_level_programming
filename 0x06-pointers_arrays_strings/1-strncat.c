#include "main.h"

/**
 * _strncat - concatenate n bytes between two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes of str to concatenate
 * Return: A pointer to the resulting strig dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
