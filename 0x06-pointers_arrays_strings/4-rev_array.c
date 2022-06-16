#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: array of integers
 * @n: number of elements of array
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int *start, *end, c;
	int i;

	start = a;
	end = a;

	for (i = 0; i < n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}
