#include "main.h"
/**
 * print_alphabet_x10  - print the alphabet in lowercase 10X
 * followed by a new line
 * Return Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char alpha10x;

	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		for (alpha10x = 'a'; alpha10x <= 'z'; alpha10x++)
		{
		_putchar(alpha10x);
		}
		_putchar('\n');
	}
}
