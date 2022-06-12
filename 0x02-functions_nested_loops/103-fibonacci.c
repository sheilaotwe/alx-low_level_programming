#include <stdio.h>
/**
 * main - Print sum of even valued terms in Fibonacci
 *
 * Return: Always (0)
 */
int main(void)
{
	long int a, b = 1, c = 2, sum = 0, sum1 = 0;

	for (a = 0; a < 49; a++)
	{
		if ((c % 2 == 0) && (c <= 4000000))
		{
			sum1 = sum1 + c;
		}
		sum = b + c;
		b = c;
		c = sum;
	}
	printf("%ld\n", sum1);

	return (0);
}
