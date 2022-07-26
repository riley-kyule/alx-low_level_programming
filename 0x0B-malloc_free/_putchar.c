#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: Character to print
 * Return: Success 1, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
