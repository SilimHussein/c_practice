#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * main - call func is_palindrome to check
 * if strings are palidrome
 *
 * @string: called from _is palindrome
 * Return: Always 0;
 */
bool is_palindrome(char string[]);

int main(void)
{
	char string1[] = "abcdcba";

	if (is_palindrome(string1))
		printf("%s \n - is palindrome \n", string1);
	else
		printf("%s \n - is not palindrome \n", string1);
	return (0);
}
/**
 * is_palindrome- checks if string is palindrome
 * @string: input string
 *
 * Return: true or false
 */
bool is_palindrome(char string[])
{
	/**
	 *  finding middle of the string
	 */
	int len = strlen(string);
	int middle = len / 2;

	/**
	 * finding if last letters match with first
	 * return true or false
	 */
	for (int i = 0; i < middle ; i++)
	{
		if (string[i] != string[len - i - 1])
			return (false);
		return (true);
	}
}
