#include <stdio.h>

/**
 * main - prints all the base 16 numbers in lowercase,
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
