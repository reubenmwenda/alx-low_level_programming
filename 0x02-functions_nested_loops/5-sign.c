#include "main.h"
/**
 * print_sign - Entry point
 * @n: I mean it does something
 * Description: checks for numbers greater or smaller or equal to 0
 *
 * Return: 1 if greater than 1 and 0 if 0 returns -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
		_putchar('-');
		return (-1);
}
