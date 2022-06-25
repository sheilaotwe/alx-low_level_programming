#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 * @argc: number of arguements 
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
