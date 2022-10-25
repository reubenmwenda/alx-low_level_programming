#include"main.h"


/**
 * _puts - prints string
 * @str: it does something
 *
 */

void _puts(char *str)
{


	while (*str != '\0')
	{
		_putchar(*str);
		*str++;

	}

}
