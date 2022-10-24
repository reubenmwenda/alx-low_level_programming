#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number = 0;

	while (number >= 0 && number <= 9)
	{
		_putchar((number % 10) + '0');
		number++;
	}
	_putchar('\n');
	return (0);
}
