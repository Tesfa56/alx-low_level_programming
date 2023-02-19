#include <stdio.h>

/**
 * main - print alphabets a-z except e and q
 *
 * Return: 0
 *
 */

int main(void)
{
	char alp[26] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
