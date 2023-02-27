#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers
 * @a: firsst integer 
 * @b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}	 

