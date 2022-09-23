#include <stdio.h>
/**
 * main - prints out even and odd numbers of array
 *
 * Return: Always 0
 */
int main(void)
{
	int a[10], even = 0, odd = 0, i;

	for (i = 0; i < 10; i++)
	{
		printf("Enter array elements; ");
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;

	}
	printf("Odd elements are: %d \n", odd);
	printf("Evne elements are: %d \n", even);
	return (0);
}
