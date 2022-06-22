#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised by power of y
 * @x: given number
 * @y: given exponent
 * Return: value of x raised by power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
