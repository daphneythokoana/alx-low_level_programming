#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: this is an input string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int i = 0, size = 0, oi = 0, pn = 0, m = 1, n;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;
		if ((*(s + i) == '-'))
				pn *= -1;
				
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
		     if (size > 0)
		         m *= 10;
		          size++;
		}
		i++;
	}

	for (n = i - size; n < i; n++)
	{
	 oi = oi + ((*(s + n) - 48) * m);
	 m /= 10;
	}
	return (oi * pn);
}
