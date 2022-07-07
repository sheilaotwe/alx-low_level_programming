#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function 
 * given as a parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function needed to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
