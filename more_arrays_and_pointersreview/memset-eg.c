#include <stdio.h>
#include <string.h>
/**
 * main - entry point to the program
 * _memset - fills out a block of memory with values and bytes
 * @str: pointer to the block of memory to be filled
 * @c: value to be filled
 * @n: number of bytes to be filled.
 *
 * Return: Always 0
 */
int main(void)
{
	char str[50];

	strcpy(str, "this is strin.h library function");
	puts(str);
	memset(str + 6, '$', 7);
	puts(str);
	return (0);
}
