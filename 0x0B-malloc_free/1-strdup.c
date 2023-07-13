#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a newly allocated space in memory
 * @str: The char
 *
 * Return:  NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int j, len;

	j = 0;
	len = 0;

	if (str == NULL)
	return (NULL);

	for (; str[len]; len++)
	{

	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	return (NULL);

	for (; (duplicate[j] = str[j]) != '\0'; j++)
	{

	}

	return (duplicate);
}
