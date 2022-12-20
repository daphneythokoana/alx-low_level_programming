#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: This is the first entry
 * @b: This is the second entry
 *
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
