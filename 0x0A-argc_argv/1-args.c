#include <stdio.h>
#include "main.h"

/**
 * main - return number of arguments
 * @argc: count of argument
 * @argv: array of argument
 *
 * Return: return 0 on success
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
