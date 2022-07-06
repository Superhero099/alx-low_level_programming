#include "main.h"

/**
 *  *print_alphabet_x10 - print alphabet 10 times, in lowercase.
 *  */

void print_alphabet_x10(void)
{
	int num_count = 0;
	int alphabet = 97;

	while (num_count <= 9)
	{
		while (alphabet <= 122)
		{
			_putchar(alphabet);
		}
		aphabet++;
	}
	num_count++;
	_putchar('\n');
}
