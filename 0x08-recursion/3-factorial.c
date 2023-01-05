#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to find fractional of
 *
 * Return: return -1 to indicate an error
 */

int factorial(int n)
{
	int answer = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	answer *= factorial(n - 1);
	return (answer);
}
