#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if is uppercase and 0 if otherwise
 * @x: number to be checked
 */

void _isupper(int x)
{
	if (x >= 65 && x <= 99)
	{
		return (1);
	}
	return (0);
}
