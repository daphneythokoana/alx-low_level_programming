#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the max bytes to be used
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
