#include "main.h"

/**
 * print_alphabet_-10x - printing alphabet 10x in lowercase
 *
 * Return: void
 */
void print_alphabet_10x(void)
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
