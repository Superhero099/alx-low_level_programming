#include "main.h"

/**
 * _memcpy - copies from src mem. area to dest mem. area
 *
 * @n: byte to be copied
 *
 * @src: memory area to be copied
 *
 * @dest: memory area to be copied to
 *
 * Return: pointer to destination memory adress
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
