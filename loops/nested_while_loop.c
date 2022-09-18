#include <stdio.h>
/**
 * main - nested while loop to print a matrix
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 1;

	while (i < 3)
	{
		while (j <= 3)
		{
			printf("%d", j++);
		}
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}
