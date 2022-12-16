#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: fisrt integer
 * @b: Secnd integer
 * @c: thrid integer
 * Return: largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ( a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else (c > b);
	{
		largest = c;
	}

	return (largest);
}
