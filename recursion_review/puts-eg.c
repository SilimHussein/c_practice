#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str1[28];
	char str2[28];

	strcpy(str1, "some string 1 to be printed");
	strcpy(str2, "some string 2 to be printed");
	puts(str1);
	puts(str2);
	return (0);
}
