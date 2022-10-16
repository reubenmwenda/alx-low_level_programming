#include <stdio.h>
/**
 * main - outputs alphabet letters
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* Simple code to show alphabet*/
	char string = 'a';

	while (string <= 'z')
	{
		putchar(string);

		string++;

	}
	return (0);
}
