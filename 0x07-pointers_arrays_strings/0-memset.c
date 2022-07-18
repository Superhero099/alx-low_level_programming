#include main.h

/**
 * _memset - fills the first @n byte of the memory
 *
 * @n: byte of the memory areapointed to by @s
 *
 * @b: char to copy
 *
 * @s: with constate byte @b
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
