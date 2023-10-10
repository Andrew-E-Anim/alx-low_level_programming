#include "main.h"

/**
 * print_alphabet_-x10 - printing alphabet x10 in lowercase
 *
 * Return: void
 */
void print_alphabet_10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
