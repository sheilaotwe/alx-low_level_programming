#include <stdio.h>

/**
 * main - check for multiple of 3 and 5
 * Return: Always (0)
 */
int main(void)
{
	int a = 1024, b, sum = 0;

	for (b = 0; b < a; b++)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			sum = sum + b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
