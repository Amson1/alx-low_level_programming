#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A function that adds positive numbers.
 * @argc: The command line of arguments.
 * @argv: The array arguments.
 * Return: 0 {success}
 */

int main(int argc, char *argv[])
{
	int c, p, sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (p = 0; argv[c][p] != '\0'; p++)
		{
			if (!isdigit(argv[c][p]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
