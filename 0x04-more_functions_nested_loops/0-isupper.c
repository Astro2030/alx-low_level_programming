#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if is uppercase and 0 if otherwise
 * @x: number to be checked
 */

void _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	return (0);
}
