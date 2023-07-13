#include "main.h"
#include <stdlib.h>
/**
	* malloc_checked - function that allocates memory using malloc
	* @b:  size of buffer
	* Return: buffer
	*/
void *malloc_checked(unsigned int s)
{
	void *memSpace = malloc(s);

	if (memSpace == NULL)
	{
	exit(98);
	}
	return (memSpace);
}
