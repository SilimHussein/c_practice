#include <stdio.h>
/**
 * main - prints elements of an array
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5], i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter elements of array: ");
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("a[i] : %d\n", a[i]);
	}
	return (0);
}
