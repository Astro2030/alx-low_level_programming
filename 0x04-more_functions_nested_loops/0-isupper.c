#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if is uppercase and 0 if otherwise
 * @c: number to be checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
