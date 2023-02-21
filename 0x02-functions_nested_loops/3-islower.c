#include "main.h"

/**
 * _islower - change c to lowercase
 *
 * @c: character
 *
 * Return: 1 0r 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

