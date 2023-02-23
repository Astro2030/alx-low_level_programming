#include "main.h"

/**
 * print_square -function to print n squares n times
 * @size: number of squares/time
 * Return: empty
 */

void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
