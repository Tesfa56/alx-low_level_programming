#include <stdio.h>

/**
 * main - print 0123456789abcdef
 *
 * Return: 0
 *
 */

int main(void)
{
	char ch[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
