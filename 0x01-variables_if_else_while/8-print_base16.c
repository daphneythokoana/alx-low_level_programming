#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char alphabet = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
