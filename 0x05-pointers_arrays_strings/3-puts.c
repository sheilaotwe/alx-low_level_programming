#include "main.h"

/**
 * _puts - print string followed by ne wline
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
