#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	int x;
	char lower_case;

	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
	putchar(lower_case);
	putchar('\n');

	return (0);
}
