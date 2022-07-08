#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings followed by a new line
 * @separator: delimiter
 * @n: number of arguments
 * Return: void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
				{
					printf("%s%s", nil_check(va_arg(args, char *)), separator);
				}
				else
				{
					printf("%s", nil_check(va_arg(args, char *)));
				}
			}
			else
			{
				printf("%s", nil_check(va_arg(args, char *)))
			}
		}
	}
	printf("\n");
	va_end(args);
}

/**
 * nil_check - strings with given separator
 * @s: check if NULL
 * Return: nil if NULL
 */

char *nil_check(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
