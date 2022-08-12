#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;
	
	a[2] = 1024;
	p = &n;
	/**
	 * line of code here
	 * requirements:
	 * not allowed to use a
	 * not allowed to modify p
	 * only one statement
	 * not allowed to code anything else and this line
	 */
	p[5] = 98;
	/**
	 * this print 98\n
	 */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
