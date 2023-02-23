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

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
