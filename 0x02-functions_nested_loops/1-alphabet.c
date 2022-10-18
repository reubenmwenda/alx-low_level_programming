#include <stdio.h>
#include "main.h"




/**
 * print_alphabet - Entry point
 * Description: uses void print_alphabet(void) to print alphabet
 */

void print_alphabet(void)
{
	char string = 'a';

	while (string <= 'z')
	{
		_putchar(string);
		string++;
	}

}
