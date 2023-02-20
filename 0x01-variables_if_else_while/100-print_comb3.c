#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all combination of tow digits
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	int num;

	for (i = '0'; i < '9'; i++)
	{
		for (num = i + 1; num <= '9'; num++)
		{
			if (num != i)
			{
				putchar(i);
				putchar(num);
				if (i == '8' && num == '9')
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
