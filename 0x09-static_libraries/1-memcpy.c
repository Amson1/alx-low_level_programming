#include"main.h"
/**
 * _memcpy -  copies the memory area
 *
 * @dest:  where it is stored
 * @src: A memory where it is copied to
 * @n: number of bytes of @src
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int j)
{
	unsigned int cpy;

	for (cpy = 0; cpy < j; cpy++)
		dest[cpy] = src[cpy];
	return (dest);
}
