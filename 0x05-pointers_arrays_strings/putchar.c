#include <unistd.h>

/**
 * _putchar - writes charecter c to stdout
 * @c: the cahracter to be printed
 * Return: 1 on Success
 * -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
