#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: represents natural number
 */

void print_to_98(int n)
{
	while (n != 9)
	{
		printf("%d", n);
			if (n > 98)
				--n;
			else if (n < 98)
				++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
