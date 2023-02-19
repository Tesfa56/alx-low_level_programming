#include <stdio.h>

/**
 * main - print a-z in reverse order
 *
 * Return: 0
 *
 */

int main(void)
{
	char ch[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}

