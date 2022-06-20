#include "main.h"

/**
 * _strspn - Function that gets length of prefix substring
 * @s: string 
 * @accept: string that checks
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int length;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			length++;
		if (accept[b] == '\0')
			return (length);
	}
	return (length);
}
