#include "main.h"
/**
 * swap_int - A function for swap the value of two integer
 * @a:first int to checkswap
*/
void swap_int(int *a, int *b)
{
	int checkSwap;

	checkSwap = *a;
	*a = *b;
	*b = checkSwap;
}
