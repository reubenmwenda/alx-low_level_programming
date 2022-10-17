#include <stdio.h>
/**
 * main - outputs alhabet backwards
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* Simple code to show alphabet in reverse order*/
	char string = 'z';

	while (string >= 'a')
	{

		putchar(string);
		string--;

	}

	putchar('\n');
	return (0);

}
