#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	len = i;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
