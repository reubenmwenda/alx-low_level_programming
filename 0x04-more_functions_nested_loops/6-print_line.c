#include "main.h"

/**
 * print_line - prints lines
 * @n: it does something
 *
 * Return: void
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{

		if (k > 0)
		{
			_putchar(95);
		}
		else if (k <= 0)
		{
			_putchar('\n');
		}
	}
}
