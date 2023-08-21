#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @str: the string to get the length
 * Return: 0
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
