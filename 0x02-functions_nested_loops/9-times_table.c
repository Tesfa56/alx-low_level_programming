#include "main.h"
/**
 * times_table - print 9 times table
 *
 */

void times_table(void)
{
	int num, count, i;

	for (i = 1; i < 10; i++)
	{
		_putchar('0');
		for (count = 1; count < 10; count++)
		{
			_putchar(',');
			_putchar(' ');

			num = count * i;

			if (num <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');

		}
		_putchar('\n');
	}
}
