#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: void
 */

int get_endianness(void)
{
	unsigned int n = 1;

	if (*(char *) &n == 1)
		return (1);
	return (0);
}
