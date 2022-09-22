#include <stdio.h>
/**
 * main - calculates the average sum of marks
 *
 * Return: Always 0
 */
int main(void)
{
	int marks[5], i;
	float sum = 0, avg;

	for (i = 0; i < 5; i++)
	{
		printf("Enter the marks of 5 students :");
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("The sum of marks is : %f\n ", sum);
	printf("The average of marks is : %f\n", avg);
	return (0);
}
