#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int a;
	int b;

	for (a = 1; 1 < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		x += atoi(argv[a]);
	}
	printf("%d\n", x);
	return (0);
}
