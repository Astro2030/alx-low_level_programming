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
	}
	for (int i = 0; i <= size; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			_putchar('#');
		}
 		_putchar('\n');
	}
}

