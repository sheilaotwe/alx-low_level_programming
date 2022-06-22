#include "main.h"

/**
 * evaluate - Functiont that returns square root
 * @x: intial integer
 * @y: last number in limit of number
 * @g: given number
 * Return: square root
 */

int _evaluate(int x, int y, int g)
{
	long mid;

	if (y >= x)
	{
		mid = x + (y - x) / 2;
		if (mid * mid == g)
			return (mid);
		if (mid * mid > g)
			return (_evaluate(x, mid - 1, g));
		if (mid * mid < g)
			return (_evaluate(mid + 1, y, g));
	}
	return (-1);
}

/**
 * _sqrt_recursion - Function that returns the natural square root of number
 * @n: given number
 * Return: square root of natural square root n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_evaluate(i, n));
}
