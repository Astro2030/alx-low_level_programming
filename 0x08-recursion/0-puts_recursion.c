#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 *  followed by a new line
 *  @s: the string to print
 *  Return: Empty.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
