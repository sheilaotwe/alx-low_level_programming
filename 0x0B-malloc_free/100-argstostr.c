#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Functiont hat concatenates all arguments of the program
 * @ac: number of arguments
 * @av: double pointer to arguments
 * Return: pointer to new string or NULL if error
 */

char *argstostr(int ac, int **av)
{
	int x, y, z = 0, n 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';
	return (s);
}
