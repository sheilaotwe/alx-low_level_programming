#include "lists.h"

void start_up_func(void)__attribute__((constructor));

/**
 * start_up_func - Function that runs before main
 * Return: void
 */
void start_up_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}