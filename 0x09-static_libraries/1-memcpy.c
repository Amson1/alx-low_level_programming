#include "main.h"

/**
 * _memcpy - the function that can copy memory
 * @dest: memory area
 * @src: copy memory
 * @n: number of bytes i the momory
 *
 * Return: copied from the memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        	int r = 0;
        	int i = n;

        	for (; r < i; r++)
        	{
                    	dest[r] = src[r];
                    	n--;
        	}
        	return (dest);
}

