#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return
 */

void_attribute_((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nl bore my house upon my back!\n");
}
