#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main -The unmber is the determinant if the output is positive
 * negative or zero
 *
 * Return is 0 
 */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	printf("%d is positive\n", n);

	else if (n == 0)

	printf("%d is zero\n", n);

	else if (n < 0)

	printf("%d is negative\n", n);

	return (0);
}
