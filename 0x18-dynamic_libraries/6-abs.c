#include "main.h"
/**
 * _abs - outputs the absolute valueof an integer
 * @c: character to be checked
 * Return: Absolute value of a number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
