#include "main.h"

/**
 * print_triangle - prints a triangle  of squares
 * @size: size of squares triangle
 * Return: empty
 */

void print_triangle(int size)
{
	if (size <= 0) 
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			_putchar('#');
		}
 		_putchar('\n');
	}
}

