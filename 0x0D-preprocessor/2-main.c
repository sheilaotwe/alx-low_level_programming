#include <stdio.h>

/**
 * main - Program that print the name of the file it was compiled from
 * followed by a new line
 * Return: Always 0
 */

int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
