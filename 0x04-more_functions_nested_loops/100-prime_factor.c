#include <stdio.h>

/**
 * main - Prints prime number of 612852475143
 *
 * Return: Always o
 */

int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div++)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
	}
	putchar(prime);
	putchar('\n');
	return (0);
}
