#include <stdio.h>
/**
 * main - calculates sum of two arrays and stores
 * in another array.
 *
 * Return: Always 0
 */
int main(void)
{
	int arr1[5], arr2[5], arrsum[5], i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter elements of array 1: ");
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("Enter elements of array 2: ");
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		arrsum[i] = arr1[i] + arr2[i];
		printf("Sum Array elements at [%d] is: %d \n", i, arrsum[i]);
	}
	return (0);
}
