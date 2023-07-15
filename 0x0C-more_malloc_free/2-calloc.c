#include <stdlib.h>
/**
 * _memset - Function that fills a memory block with a specific byte
 * @i: Memory block to fill
 * @b: Byte to fill the memory block with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the filled memory area (s)
 */
char *_memset(char *i, char b, unsigned int n)
{
	unsigned int idx;

	/* Iterate over each byte and set it to the specified value */
	for (idx = 0; idx < n; idx++)
		i[idx] = b;

	return (i);
}

/**
 * _calloc - Allocates memory for an array to zero.
 *
 * @nmemb:  elements in the array.
 * @size: The size (in bytes) .
 *
 * Return: newly allocated memory, or 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	/* Check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero using _memset */
	_memset(p, 0, nmemb * size);

	return (p);
}
