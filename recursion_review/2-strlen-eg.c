#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[50];
	int len;

	strcpy(str, "some string to be calculated");
	len = strlen(str);
	printf("the length of the string is : %d \n", len);
	return (0);
}
