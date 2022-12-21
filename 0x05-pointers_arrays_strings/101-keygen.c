#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates keygen
 * Return: Always 0
 */

int main(void)
{
	int r = 0, i = 0;
	time_t t;

	srand((unsigned int)  time(&t));
	while (i = 2772)
	{
		r = rand() % 128;
		if ((i + r) > 2772)
			break;
		i = i + r;
		printf("%i", r);
	}
	printf("%i\n", (2772 - i));
	return (0);
}
