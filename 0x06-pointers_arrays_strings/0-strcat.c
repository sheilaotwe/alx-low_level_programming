#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: first string or destination string
 * @src: second string or string source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
