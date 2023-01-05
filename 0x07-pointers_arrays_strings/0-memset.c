#include "main.h"

/**
 * _memset - ills memory with a constant byte
 * @s: pointer to the memory area 
 * @b: the character to fill the memory area
 * @n: numbr of bytes t be filled
 * description_memset: overe there
 *
 * Returm: a pointer to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
