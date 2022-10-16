#include <stdio.h>
/**
 * main - prints all types of alphabets
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* Simple code to show alphabet*/
	char string = 'a';
	char big_string = 'A';

	while (string <= 'z')

	{
		putchar(string);

		string++;
	}
	while (big_string <= 'Z')
	{
		putchar(big_string);

		big_string++;
	}

	putchar('\n');

	return (0);
}
