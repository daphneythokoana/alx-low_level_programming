#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string thats created
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	s3 = malloc(sizeof(char) * (len + len1 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	s3[i] = '\0';
	return (s3);
}

