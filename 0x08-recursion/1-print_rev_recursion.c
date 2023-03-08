#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse,
 *  followed by a new line
 *  @s: the string to print
 *  Return: Empty.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
