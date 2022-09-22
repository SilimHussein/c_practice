#include <stdio.h>
/**
 * main - prints arrray elements in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5], i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter array elements ");
		scanf("%d", &a[i]);
	}
	for (i = 4; i >= 0; i--)
	{
		printf("a[1]: %d\n", a[i]);
	}
	return (0);
}
