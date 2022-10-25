#include"main.h"


/**
 * _strlen - checks long of string
 * @s: it does something
 * Return: returns value of string
 */

int _strlen(char *s)
{
	unsigned int count = 0;


	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);

}
