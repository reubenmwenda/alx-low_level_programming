#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers go there */


/* betty style doc for function main goes there*/

/**
 * main - uses if statements to output value of n
 *
 * Return: 0 (Success)
 */

int main(void)
{

	/* learning if statements*/
	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/*your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n <= 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
