#include <stdlib.h>
#include "main.h"
/**
 * argstostr - A function concatenates all argument in a program
 * @ac: int input
 * @av: poniter array
 *
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *result;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	}

	result = (char *)malloc(len + ac + 1);
	if (result == NULL)
	return (NULL);

	bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
	for (j = 0; av[i][j]; j++)
	result[bufferlen++] = av[i][j];
	result[bufferlen++] = '\n';
	}
	result[bufferlen] = '\0';

	return (result);
}
