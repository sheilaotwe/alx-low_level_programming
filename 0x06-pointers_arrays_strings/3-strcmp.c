#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: pointer to a character that will be changed
 * @s2: pointer to a character that will also be chnaged
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	char a = s1;
	char b = s2;

	while (a != '\0' && b != '\0' && a == b)
	{
		a++;
		b++;
	}

	return (a - b);
}
