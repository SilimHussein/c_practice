#include <stdio.h>
/**
 * main - runtime innitialization of arrays.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int a[5];

	for (i = 0; i < 5; i++)
	{
		printf("Enter ellements of array:");
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("value of 'a[i]': %d\n", a[i]);
	}
	return (0);

}
