#include "main.h"

/**
* _sqrt_recursion - returns natural square root of a number
* @n: integer
* Return: natural square root or -1 if no square root for n
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actul_sqrt_recursion(n, 0));
}

/**
* natural_square - a function that help to find natural_square
* @x: integer
* @y: integer
* Return: square root or -1
**/

int actual_sqrt_recursion(int x, int y)
{

	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (actual_sqrt_recursion(x, y + 1));
}

