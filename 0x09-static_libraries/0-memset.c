#include "main.h"

/**
 * _memset -program give the memory with a value
 * @s: showing the value
 * @b: the right memory
 * @n: number to be changed 
 *
 * Return: change array with value of the bytes
 */




char *_memset(char *s, char b, unsigned int n)


{


   	int a = 0;





   	for (; n > 0; a++)


   	{


          	s[a] = b;


          	n--;


   	}


   	return (s);


}


