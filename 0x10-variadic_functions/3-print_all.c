#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: format
 * Return: void function
 */

void print_all(const char * const format, ...)
{
	char current;
	int i = 0, index; 
	va_list args;

	va_start(args, format);
	index = checker(format);
	while ((format != NULL) && (format[i]))
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				comma(i, index);
				i++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				comma(i, index);
				i++;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				comma(i, index);
				i++;
				break;
			case 's':
				printf("%s", nil(va_arg(args, char *)));
				comma(i, index);
				i++;
				break;
			default:
				i++;
				break;
		}
	}
	printf("\n");
	va_end(args);
}

/**
 * checker - function that prints strings
 * @format: format
 * Return: int
 */

int checker(const char * const format)
{
	int i = 0, j = 0;
	char str;
	while ((format != NULL) && (format[j]))
	{
		str = format[j];
		switch (str)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}
	}
	return (i);
}
/**
 * comma - function that prints comma
 * @i: current index
 * @j: last valid index
 * Return: void
 */

void comma(int i, int j)
{
	if (i != j)
		printf(", ");
}
/**
 * nil - function that prints string with separator
 * @s: check if NULL
 * Return: nill or NULL
 */

char *nil(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
