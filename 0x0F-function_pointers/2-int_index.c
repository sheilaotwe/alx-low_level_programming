#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: if no element matched return -1
 * if no size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
