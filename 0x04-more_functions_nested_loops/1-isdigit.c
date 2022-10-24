#include "main.h"

/**
 *_isdigit - checks for digit
 * @c: I mean it does something
 *
 * Return: 1 if upper and 0 if lower
 */
int _isdigit(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
