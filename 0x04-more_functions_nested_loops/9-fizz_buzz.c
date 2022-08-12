#include <stdio.h>
/**
 * main - function for entry point
 * Description: prints number from 1 to 100
 * followed by new line
 * For multiples of three, print Fizz
 * For multiples of five, print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
