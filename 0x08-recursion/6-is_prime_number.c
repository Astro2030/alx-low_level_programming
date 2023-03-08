#include "main.h"
/**
 * file: 6-is_prime_number.c
 */

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: The divisor.
 * Return: 0(if divisible) and 1(not divisible)
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
