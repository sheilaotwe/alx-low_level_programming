#include "main.h"

/**
 * print_line - function that draws straight line in terminal
 * @n: number of times of the charter
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
