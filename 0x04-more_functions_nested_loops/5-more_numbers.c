#include "main.h"

/**
 * more_numbers - prints numbers 0 to 9 without 2 and 4
 *
 * Return: void
 */
void more_numbers(void)
{
	int times = 0;

	while (times <= 10)
	{
		int number = 0;

		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}

			_putchar((number % 10) + '0');
			number++;
		}
		times++;
		_putchar('\n');
	}
}
