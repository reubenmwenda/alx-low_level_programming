#include "main.h"
/**
 * print_alphabet_x10 - check code
 * Description: prints ze alphabet ten times
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times <= 10)
	{
		char string = 'a';

		while (string <= 'z')
		{
			putchar(string);
			string++;

		}

		times++;
		putchar('\n');
	}

}
