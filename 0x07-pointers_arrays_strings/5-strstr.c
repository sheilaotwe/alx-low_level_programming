#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: pointer to beginning of located substring
 * or null if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
