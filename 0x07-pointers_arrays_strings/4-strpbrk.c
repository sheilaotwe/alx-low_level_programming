#include "main.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the bytes
 * matches one of the bytes or null
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}
	return (0);
}
