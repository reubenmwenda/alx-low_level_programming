#include "main.h"
/**
 * _islower - Entry point
 * @c: I mean it does something
 * Description: checks for small letters
 *
 * Return: 1 if small and 0 if not small
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
