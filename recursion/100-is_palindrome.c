#include "main.h"

/**
 * str_len - length of string
 * @s: string
 * Return: returns length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * palindrome_checker - checks if string is palindrome
 * @s: string
 * @start: first half of string
 * @end: second half of string
 * Return: 1 if string is palindrome, 0 if it is not
 */

int palindrome_checker(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, 0, str_len(s) - 1));
}
