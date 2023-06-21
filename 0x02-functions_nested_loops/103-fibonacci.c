#include <stdio.h>
/**
  * main - Prints the sum of the even-valued terms
  * Return: Zero.
  */
int main(void)
{
	unsigned long fibonacci, num1, num2, num3, total;

	num1 = total = 0;
	num2 = 1;
	for (fibonacci = 0; fibonacci < 50; fibonacci++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num3 % 2 == 0 && num3 < 4000000)
		total += num3;
	}
	printf("%lu\n", total);
	return (0);
}
