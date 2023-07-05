#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - a function for a palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	)
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
int is_palindrome(char *s)
{
	int len = strlen(s);
	return (is_palindrome_helper(s, 0, len - 1));
}
