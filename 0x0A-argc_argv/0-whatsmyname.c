#include <stdio.h>
/**
 * main - A program prints its name.
 * @argc: The command line arguments.
 * @argv:  array of the program
 * command line arguments.
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
