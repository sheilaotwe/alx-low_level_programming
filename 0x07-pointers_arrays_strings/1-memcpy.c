#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: destination
 * @src: source
 * @n: value of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;
	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
