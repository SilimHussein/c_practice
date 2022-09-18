#include <stdio.h>
/**
 * main - nested for loop to print a 5 X 6 matrix
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (j = 1; j <= 6; j++)
	{
		for (i = 1; i <= 5; i++)
		{
			printf("*");
		}
	printf("\n");
	}
	return (0);
}
