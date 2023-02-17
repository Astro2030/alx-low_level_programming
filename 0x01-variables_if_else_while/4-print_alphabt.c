#include <stdio.h>

/**
 * main - a prograzm that prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char lowercase_letters[26] = "abcdfghijklmnoprstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(lowercase_letters[x]);
	}
	putchar('\n');

	return (0);
}
