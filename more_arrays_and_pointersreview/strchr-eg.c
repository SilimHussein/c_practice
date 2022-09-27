#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * _strchr - finds a character c in string str
 * @str: string to be scanned
 * @c: character to be searched in c
 * Return: Always 0
 */
int main(void)
{
	const char str[] = "Some string to be scanned";
	char *ret;
	const char ch = 'b';

	ret = strchr(str, ch);
	printf("String after |%c| is |%s| \n", ch, ret);
	return (0);
}
