#include <unistd.h>
#include "main.h"

/**
 * _putchar - write char
 *
 * @c: char
 *
 * Return: on sccess 1,
 * On error, -1
 *
 */

int _putchar(char c)
{
	return (write(1, $c, 1));
}
