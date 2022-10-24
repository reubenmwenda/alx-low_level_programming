#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		if (number == 2)
		{
			number++;
			continue;
		}
		else if (number == 4)
		{
			number++;
			continue;
		}
		_putchar((number % 10) + '0');
		number++;
	}
	_putchar('\n');
}
