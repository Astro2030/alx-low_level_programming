#include <stdio.h>
#include <math.h>

/**
 * main - functio to print the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long m, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (m = 1; m <= square; m++)
	{
		if (number % m == 0)
		{
			maxf = number / m;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}

