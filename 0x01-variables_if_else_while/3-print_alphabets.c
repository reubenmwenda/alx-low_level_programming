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

	while (string <= 'z' && big_string <= 'Z')

	{
		putchar(string);
		putchar(big_string);

		string++;
		big_string++;
	}
	putchar('\n');

	return (0);
}
