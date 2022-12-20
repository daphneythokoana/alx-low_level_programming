#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed by scr,
 *         ncluding the terminating null byte,
 *         to the buffer pointed to by dest.
 *@dest: this is the destination
 *@src: the input string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == ('\0'))
			break;
		count++;
	}
	return (dest);
}	
