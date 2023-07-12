#include <stdio.h>
/**
 * main - A function prints all arguments it receives.
 * @argc: The command line arguments.
 * @argv:  Array  command line of  arguments.
 * Return: 0 {success}
 */
int main(int argc, char *argv[])

{
	int all;

	for (all = 0; all < argc; all++)

		printf("%s\n", argv[all]);
	return (0);
}
