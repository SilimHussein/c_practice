#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * is_palindrom - checks if a string is palindrome
 * @s: input string
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
