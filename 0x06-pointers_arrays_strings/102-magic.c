#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write line of code here:
	 * not allowed to use variable a in new line of code
	 * not allowed to modify variable p
	 * only write one statement
	 * not allowed to code anything except this line of code
	 */
	p[5] = 98;
	/*
	 * print 98\n
	 */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
