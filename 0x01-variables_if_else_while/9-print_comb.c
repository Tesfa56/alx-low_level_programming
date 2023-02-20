#include <stdio.h>

/**
 * main - print single digit numbers with comma separeted
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
