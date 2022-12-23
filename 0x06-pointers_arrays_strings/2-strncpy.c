#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: this is the input value
 * @src: this is the input value
 * @n: this is the input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
			i++;
	}
	return (dest);
}
