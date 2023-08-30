#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - function that returns the value
* of x raised to the power of y.
* @x: inp 1
* @y: inp 2
* Return: pointer the byets in 's'
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 1)

		return (x);

	else if (y > 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}
