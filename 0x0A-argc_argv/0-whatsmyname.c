#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc:  count of arguments
 * @argv: array of arguments commands
 *
 * Return: return 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
