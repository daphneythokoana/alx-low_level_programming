#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charaters c to stdout
 * @c: The charaters to print 
 *
 * Return: On success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
