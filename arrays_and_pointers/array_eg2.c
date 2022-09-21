#include <stdio.h>
/**
 * main- an array is not a pointer but..
 *
 * Return: Always 0
 */
int main(void)
{
	int a[98]; /* array */

	printf("a as an integer: %d\n", a[98]);
	printf("a as a pointer: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	return (0);
}
