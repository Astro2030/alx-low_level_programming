#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a prograzm that prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char alphabet_LETTERS;

	for (alphabet_LETTERS = 'a'; alphabet_LETTERS <= 'z'; alphabet_LETTERS++)
	putchar(alphabet_LETTERS);

	for (alphabet_LETTERS = 'A'; alphabet_LETTERS <= 'Z'; alphabet_LETTERS++)
	putchar(alphabet_LETTERS);
	putchar('\n');

	return (0);
}

