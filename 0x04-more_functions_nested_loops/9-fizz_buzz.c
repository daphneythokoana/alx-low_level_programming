#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, but mulitples of three,
 *      Fizz is printed, Buzz is printed in multiples of five and
 *      fuzzbuzz in both five and three.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
