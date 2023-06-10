#include <stdio.h>
#include "main.h"


/**
 * _putchar - pritout char c
 * @c - char c
 *
 * Return: on success 1.
 * On error: -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}

