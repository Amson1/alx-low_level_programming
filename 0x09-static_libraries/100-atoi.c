#include "main.h"
/**
 * _atoi - turn  string into an integer
 *
 * @s: the string input parameter
 *
 * Return: turn  integer from string
*/
int _atoi(char *c)
{
	unsigned int num = 0;
	int sign = 1;

	for (; *c != '\0'; c++)
	{
		if (*c == '-')
			sign *= -1;
		else if (*s >= '0' && *c <= '9')
			num = (num * 10) + (*c - '0');
		else if (num > 0)
			break;
	}

	return (num * sign);
}
