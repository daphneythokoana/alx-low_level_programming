#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: is the string
 * @accept: bytes in the string
 *
 * Return: a pointer to the byte in s,
 *      htat matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
