#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, a = 1, b = 2, sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 48)
			printf("%ld\n", a);
	}
	return (0);
}
