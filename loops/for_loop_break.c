#include <stdio.h>
/**
 * main - prints 5 numbers if its -ve ends
 *
 * Return: Always 0
 */
int main(void)
{
	int a, i, sum = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a);
		if (a < 0)
			break;
		sum = sum + a;
	}
	printf("Sum = %d \n ", sum);
	return (0);
}
