#include "main.h"

/**
 * _isupper - change c to uppercase
 *
 * @c: character
 *
 * Return: 1 0r 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
