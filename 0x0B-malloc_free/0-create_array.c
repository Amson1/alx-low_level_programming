#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: array size to be created
 * @c: char of the array c
 *
 * Return: pointer to  array[Success], NULL if it fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	*(ptr + i) = c;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
