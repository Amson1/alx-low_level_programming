#include <stdio.h>
#include <unistd.h>

/**
 * main - This is the main point
 * Description: This  program will  prints  text and sandard error
 * Return: Print out the standard error
 */
int main(void)

{ 
	
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
