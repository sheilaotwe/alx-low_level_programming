#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Functiont hat concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *CopyS;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	CopyS = malloc(sizeof(char) * (a + b +1));
	if (CopyS == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		CopyS[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		CopyS[b] = s2[b];
		a++, b++;
	}
	CopyS[a] = '\0';
	return (CopyS);
}
