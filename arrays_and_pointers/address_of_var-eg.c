#include <stdio.h>
/**
 * main- prints the actual address of a given variable
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int n;

	printf("The address of variable 'c': %p\n", &c);
	printf("The address of variable 'n': %p\n", &n);
	return (0);
}
