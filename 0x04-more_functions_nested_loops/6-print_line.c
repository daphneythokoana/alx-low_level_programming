#include "main.h"

/**
 * print_line - Draws a straight line.
 *@n: The number of characts t b printed out.
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
