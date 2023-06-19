#include <stdio.h>
#include <ctype.h>
/**
 * main -  prints the alphabet in lowercase
 * uppercase followed by a new line
 *
 * Return: Always 0 (success)
 * */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	alphabet = tolower(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
	putchar(alphabet);
	}
	alphabet = toupper(alphabet);
	putchar('\n');

	return (0);
}
