#include "main.h"

/**
 * _isaplha - check character is alphabetic
 *
 * @c: character in ASCII code
 *
 * Return: 1 for letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
