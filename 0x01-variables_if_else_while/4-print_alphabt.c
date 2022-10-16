#include <stdio.h>

/**
 * main - outputs alphabet letters
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* Simple code to show alphabet minus e and q*/
	char string = 'a';

	while (string <= 'z')
	{
		if (string == 'e')
		{
			string++;
			continue;

		}

		if (string == 'q')
		{
			string++;
			continue;
		}
		putchar(string);
		string++;
	}
	putchar('\n');
	return (0);

}
