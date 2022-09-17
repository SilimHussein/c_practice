#include <stdio.h>
/**
*main- displays age.
*
*Return: Always 0
*/
int main(void)
{
	int age;

	printf("Enter your age:");
	scanf("%d", &age);
	if (age > 25 && age < 30)
	{
		printf("Your age is %d \n", age);
		printf("You can go for coffee with me \n");
	}
	else
	{
		printf("Your age is %d \n", age);
		printf("Go home \n");
	}
printf("out of if-else statement \n");
return (0);
}
