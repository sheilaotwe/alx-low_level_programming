#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int length, a, b;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	a = length - 1;
	b = 0;

	while (a > b)
	{
		v1 = s[b];
		v2 = s[a];
		s[b] = v2;
		s[a] = v1;
		a--;
		b++;
	}
}
