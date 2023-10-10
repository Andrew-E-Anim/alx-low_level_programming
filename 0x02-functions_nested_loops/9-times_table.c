#include "main.h"
/**
 * times_table - prints the 9 times tables starting with 0
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			result = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
					_putchar(' ');
			}
			if (result <= 9)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}

