#include <stdio.h>
/**
 * main - prints the number of arguments that passed into it.
 * @argc: The  line arguments.
 * @argv:  Array of that  arguments.
 * Return: 0 {success}
 */
int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);

	return (0);
}
