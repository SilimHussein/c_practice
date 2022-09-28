#include <stdio.h>
/**
 * main - entry point to the program
 *
 * factorial - calculates the factorial of a number
 * @n: input number
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
