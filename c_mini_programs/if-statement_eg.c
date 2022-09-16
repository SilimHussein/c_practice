#include <stdio.h>
/**
*main - entry point
*
*
*Return: Always 0
*/
int main(void)
{
	int age;

	printf("enter your age:");
	scanf("%d", &age);

	if (age > 20)
	{
		printf("your age is: %d \n", age);
		printf("you can go coffee with me \n");
	}
printf("its time to go home");
return (0);
}
