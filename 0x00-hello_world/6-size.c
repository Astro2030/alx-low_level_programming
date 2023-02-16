#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of char: %ld bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of char: %lld bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of char: %f bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}
