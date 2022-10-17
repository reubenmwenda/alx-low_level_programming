#include <stdio.h>

/**
 * main - prints out numbers using putchar()
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	/* local variable definition */
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;

	}

	putchar('\n');
	return (0);

}
