#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of character in string or 
 * pointer to null if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s !== '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
