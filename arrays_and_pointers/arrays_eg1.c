#include <stdio.h>
/**
 * main - Accessing different elements of an array
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {98, 198, 298, 398, 498};

	printf("The value of a [0] : %d\n", a[0]);
	printf("The value of a [1] : %d\n", a[1]);
	printf("The value of a [2] : %d\n", a[2]);
	printf("The value of a [3] : %d\n", a[3]);
	printf("The value of a [4] : %d\n", a[4]);
	printf("The address of 'a[0]': %p\n", &(a[0]));
	printf("The address of 'a[1]': %p\n", &(a[1]));
	printf("The address of 'a[2]': %p\n", &(a[2]));
	printf("The address of 'a[3]': %p\n", &(a[3]));
	printf("The address of 'a[4]': %p\n", &(a[4]));
	return (0);
}
