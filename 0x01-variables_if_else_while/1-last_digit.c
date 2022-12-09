#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num;

	printf("Last digit of %d is", n);

	num = n % 10;
	if (num > 5)
		printf("%d and is greater than 5\n", n);
	else if ((num < 6) && (num < 0))
		printf("%d and is less than 6 and not 0\n", n);
	else
		printf("%d and is 0\n", n);

	return (0);
}
