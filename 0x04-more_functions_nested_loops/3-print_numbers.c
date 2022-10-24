#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number = 48;

	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
