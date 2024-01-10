#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare - This function compares each character of the string
 * @s: The string
 * @i: The smallest iterator
 * @j: The biggest iterator
 * Return: This returns
 */

int compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		return (0 + compare(s, i + 1, j - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - This function checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (compare(s, 0, _strlen_recursion(s) - 1));
	}
}
