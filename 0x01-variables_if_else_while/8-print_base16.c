#include <stdio.h>
/**
 * main - Outputs hexadecimal characters
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	char num = 'a';
	int numm = 0;

	while (numm < 10)
	{
		putchar((numm % 10) + '0');
		numm++;

	}

	while (num < 'g')
	{
		putchar(num);
		num++;

	}
	putchar('\n');
	return (0);

}
