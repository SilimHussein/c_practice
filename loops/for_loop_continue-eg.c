#include <stdio.h>
/**
 * main - continue keyword skips statements & restarts for iteration
 *
 * Return: Always 0
 */
int main(void)
{
	int i, a, sum = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter an integer :");
		scanf("%d", &a);
		if (a < 0)
		{
			printf("negative number, Please enter a positive integer");
			continue;
		}
		sum = sum + a;
	}
	printf("Sum = %d \n", sum);
	return (0);
}
