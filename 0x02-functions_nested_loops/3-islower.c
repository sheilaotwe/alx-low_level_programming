#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: character in ASCII
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
