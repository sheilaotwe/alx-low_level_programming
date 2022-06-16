#include "main.h"

/**
 * _strncat -  function that concatenate two strings
 * @dest: first string or destination string
 * @src: second string or string source
 * @n: number of bytes used from source string
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && n > b)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (n > 0)
	{
		dest[a] = '\0';
	}
	return (dest);
}
