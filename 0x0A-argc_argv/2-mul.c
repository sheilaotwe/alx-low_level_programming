#include "main.h"

/**
 * main - Program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers
 * Retunr: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
