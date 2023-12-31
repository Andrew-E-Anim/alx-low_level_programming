#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: will be the number to be processed
 * Return: 1 if number is positive, 0 if zero, otherwise -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
