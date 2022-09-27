#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * _memcpy - copies character frm src to dest.
 * @dest: pointer to dest
 * @src: pointer to src datat to be copied
 * @n: number of bytes to be copied.
 * Return: Always 0
 */
int main(void)
{
	const char src[50] = "some string at originally at source";
	char dest[50];

	strcpy(dest, "helloo!!!");
	printf("before memcpy dest = %s \n", dest);
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s \n", dest);
	return (0);
}
