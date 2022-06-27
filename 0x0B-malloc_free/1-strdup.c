#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Function that returns a pointer to a newly allocated space
 * in memory which contains a copy of string given as parameter
 * @str: sting to copy
 * Return: pointer to array or NULL
 */

char *_strdup(char *str)
{
	char *CopyS;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	CopyS = malloc(sizeof(*str) * a);
	if (CopyS == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		CopyS[b] = str[b];
		b++;
	}
	return (CopyS);
}
