#include <stdio.h>
/**
 * main - prints a table of any inputted number
 *
 * Return: Alawys 0
 */
int main(void)
{
	int number, i, a;

	printf("Enter a number:");
	scanf("%d", &number);
	for (i = 1 ; i <= 10 ; i++)
	{
		a = number * i;
		printf("%d X %d= %d \n", number, i, a);
	}
return (0);
}
