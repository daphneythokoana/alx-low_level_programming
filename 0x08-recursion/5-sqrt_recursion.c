#include "main.h"

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the square root
 * @root: the root to be tested
 * Return: the square root,
 *      if num deos not have a natral sqaare root - -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: nmber to return square root
 * Return: natural square root of n,
 *      n natural square root return - -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (_sqrt_recursion(n, root));
}
