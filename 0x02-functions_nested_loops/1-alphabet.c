#include "main.h"
/**
 * print_alphabet - A program that prints all the english alphabet from a-z.
 * Return: 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
