#include "main.h"

/**
 * flip_bits - function that checks number of bits needed to flip on number to another
 * @n: first character
 * @m: second character
 * Return: number 
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int len = 0;

	while (a)
	{
		if (a & 1)
			len++;
		a >>= 1;
	}
	return (len);
}
