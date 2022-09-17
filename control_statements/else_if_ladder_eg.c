#include <stdio.h>
/**
 * main - displays grade against marks entered
 *
 * Return: Always 0.
 */
int main(void)
{
	int marks;

	printf("Enter your marks:");
	scanf("%d", &marks);
	if (marks >= 70)
		printf("GRADE A \n");
	else if (marks >= 60)
		printf("GRADE B \n");
	else if (marks >= 50)
		printf("GRADE C \n");
	else if (marks >= 40)
		printf("GRADE D \n");
	else
		printf("GRADE E \n");
return (0);
}
