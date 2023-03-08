#include "main.h"

/**
 * is_palindrome - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest itarator
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + is_palindrome(s, n1 + 1, n2 - 1));
	}
	return (0);
}