#include <stdio.h>
	int main (void)
	{
	char f,m,l;
	int age;
	printf("Enter your innitials followed by your age:");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My innitials are %c%c%c and my age is %d .\n", f,m,l,age);
	return (0);	
	}
