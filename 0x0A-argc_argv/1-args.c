#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; 
	/**
	 * Ignore argv
	 */
	printf("%i\n", argc - 1);

	return (0);
}
