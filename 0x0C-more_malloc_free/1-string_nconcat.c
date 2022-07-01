#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: string one to append to 
 * @s2: string two to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j = 0, a = _strlen(s1);
	int i = 0, b;
	char *str;

	str = malloc(a + n + 1);
	if (n < (unsigned int) _strlen(s2))
	{
		b = n;
	}
	else
	{
		b = _strlen(s2);
	}
	if (str != NULL)
	{
		for (; j < a; j++)
		{
			str[j] = s1[j];
		}
		for (; i < b; i++)
		{
			str[i + j] = s2[1];
		}
		str[i + j] = '\0';
	}
	else
		return (NULL);
	return (str);
}

/**
 * _strlen - return the length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	if (s != NULL)
	{
		for (var = 0; s[var] != '\0'; var++)
		{
			output += 1;
		}
	}
	return (output);
}
