#include <stdio.h>
#include "main.h"
#define MAXSTRING 100
/**
 * main - outputs putchar
 *
 * Return: this returns 0 (Success)
 */

int main(void)
{
	char message[] = "_putchar";
	int count = 0;

	while (count < MAXSTRING)
	{
		if (message[count] == '\0')
		{
			_putchar('\n');
			count++;
			break;
		}
		else
		{
			_putchar(message[count]);
		}
		count++;
	}

	return (0);
}
