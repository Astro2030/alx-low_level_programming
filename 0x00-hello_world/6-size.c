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

	printf("Size of a char: %lu bytes(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of long int: %ld bytes(s)\n", (sizeof(c));
	printf("Size of long long int: %lld bytes(s)\n", sizeof(d));
	printf("Size of float: %f bytes(s)\n", sizeof(f));

	return (0);
}
