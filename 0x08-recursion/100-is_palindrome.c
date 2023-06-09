#include "main.h"
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    if (length <= 1)
    {
        return (1);
    }
    else
    {
        return is_palindrome_helper(s, 0, length - 1);
    }
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }

    if (s[start] != s[end])
    {
        return 0;
    }

    return is_palindrome_helper(s, start + 1, end - 1);
}

