#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
