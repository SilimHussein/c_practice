#include <stdio.h>
/**
 *main - prints odd numbers between 0 and 9
 *
 *return - 0
 */
int main(void)
{
	char ch = '1';

	for (ch ='1'; ch <= '9'; ch = ch+2)
		putchar(ch);
	return (0);
}
