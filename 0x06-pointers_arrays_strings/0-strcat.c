#include "main.h"

/**
 * _strcat - concatenates two strings by
 * appending src to dest and overwriting
 * the termination null byte (\0) at the end of dest
 * Then adds a terminatng null byte
 * @src: String to be appended to the
 * @dest: string
 * Return: A pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
