#include "main.h"

/**
 * factorial - Functiont hat returns the factorial of given number
 * @n: given number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
