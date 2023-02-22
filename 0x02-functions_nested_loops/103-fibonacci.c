#include <stdio.h>

/**
 * main - program to print fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, sum = z;

	while (y + z < 4000000)
	{
		z += y;
		if (z % 2 == 0)
			sum += z;
			y = z - y;
			++x;
	}
	printf("%ld\n", sum);
	return (0);
}
