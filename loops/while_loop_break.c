#include <stdio.h>
/**
 * main - using break to exit a while loop early
 *
 * Return: Always 0
 */
int main(void)
{
	int a, sum = 0;

	while (1)
	{
		printf("Enter a number: ");
		scanf("%d", &a);
		if (a < 0)
			break;
		sum = sum + a;
	}
	printf("Sum = %d \n", sum);
	return (0);
}
