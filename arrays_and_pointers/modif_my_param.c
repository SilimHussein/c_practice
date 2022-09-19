#include <stdio.h>
/**
 * modif_my_param - this function does not modify n
 * @m: useless integer
 *
 * Return: nothing
 */
void modify_my_param(int m)
{
	m = 402;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 98;
	modif_my_parma(n);
	return (0);
}
