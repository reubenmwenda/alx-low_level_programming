#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: I mean it does something
 * Description: printslast value
 *
 * Return: returns int
 */

int print_last_digit(int n)
{

	int m;

	if (n < 0)
	{
		n = (-1) * n;
		_putchar((n % 10) + '0');

	}
	m = n % 10;
	_putchar((m % 10) + '0');
}
