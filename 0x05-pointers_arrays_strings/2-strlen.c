#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: This in the iinput string
 * Return: length of the string
 *
 */

int _strlen(char *s)
{
	int index;

	for ( index = 0; s[index] != '\0';
			index++);
	return (index);
}
