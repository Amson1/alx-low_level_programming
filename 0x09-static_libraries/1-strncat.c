#include "main.h"

/**
 * _strncat - concatenate two strings
 *  @dest: The  destination string.
 * @src: The  source string.
 * @n: The maximum number of characters to be concatenated.
 *
 * Return:  the resulting string @dest.
 */



char *_strncat(char *dest, char *src, int n)


{


        	int a;


        	int b;





        	a = 0;


        	while (dest[a] != '\0')


        	{


                    	a++;


        	}


        	b = 0;


        	while (b < n && src[b] != '\0')


        	{


        	dest[a] = src[b];


        	a++;


        	b++;


        	}


        	dest[a] = '\0';


        	return (dest);


}



