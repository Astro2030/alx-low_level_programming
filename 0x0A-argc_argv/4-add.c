#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 3)
	{
		printf("Usage: %s <number> [<number> ...]\n", argv[0]);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error: \"%s\" is not a valid number\n", argv[i]);
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
