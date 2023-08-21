#include "main.h"

/**
 * _isdigit - function to check if a character is a digit
 * @n: number to be checked
 * Return: 1 for digit and 0 for anything else
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
		return (0);
}
