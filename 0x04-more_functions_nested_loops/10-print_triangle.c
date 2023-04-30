#include "main.h"

/**
 * print_triangle - prints a triangle  of squares
 * @size: size of squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	int m, n, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (n = m; n <= size - 1; n++)
			{
				_putchar(32);
			}
			for (p = 1; p <= m; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
