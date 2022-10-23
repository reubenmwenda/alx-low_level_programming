#include "main.h"

/**
 *_isupper - checks for upper case
 * @c: I mean it does something
 *
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
