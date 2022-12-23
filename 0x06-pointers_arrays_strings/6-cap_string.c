#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: string to be capitalizing
 *
 * Return: pointer to a changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			i++;

		if (str(index - 1) == ' ' ||
				s(index - 1) == '\t' ||
				s(index - 1) == '\n' ||
				s(index - 1) == ','  ||
				s(index - 1) == '.'  ||
				s(index - 1) == '!'  ||
				s(index - 1) == '?'  ||
				s(index - 1) == '"'  ||
				s(index - 1) == '('  ||
				s(index - 1) == ')'  ||
				s(index - 1) == '{'  ||
				s(index - 1) == '}'  ||
				index == 0)
		str(index) -= 32;
	index++;
	}

	return (str);
}
