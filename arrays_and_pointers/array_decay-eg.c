#include "main.h"
#include <stdio.h>
/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t; /* this works because of the auto implicit conversion to (int *) */
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[10]);
	printf("p: %p\n", p);
	f(t);
	return (0);
}
