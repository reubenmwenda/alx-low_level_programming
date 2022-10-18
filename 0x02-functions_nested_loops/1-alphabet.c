#include <stdio.h>
#include "main.h"

/**
 * main - uses void print_alphabet(void); to print alphabet
 *
 * Return: returns 0 (Success)
 *
 */



int main(void)
{
	/* calling a function to show alphabet*/
	print_alphabet();

	_putchar('\n');

	return (0);

}

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
