#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
