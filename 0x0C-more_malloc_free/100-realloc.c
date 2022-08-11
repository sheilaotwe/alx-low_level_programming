#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Function that reallocates memory block using malloc and free
 * @ptr: elements to allocate
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int j;
	void *s;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		s = malloc(new_size);
		for (j = 0; j < min(old_size, new_size); j++)
		{
			((char *)s)[j] = ((char *)ptr)[j];
		}
		free(ptr);
	}
	else
		return (NULL);
	return (s);
}

/**
 * min - min of a and b
 * @a: first
 * @b: second
 * Return: return minimum
 */

int min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}
