# include "main.h"
/**
 * _memset - Function that fill memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: value of bytes of memory area
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
