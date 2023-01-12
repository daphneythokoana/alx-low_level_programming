#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: max number of bytes of to s2 concatenat s2
 *
 * Return: pointer shall point to a newly
 *        allocated space in memory if not NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s[index] && < n; index++)
		concat[len++] = s2[index];
	contact[len] = '\0';
	return (concat);
}
