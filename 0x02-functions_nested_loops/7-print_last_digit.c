#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int a; 

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar('0' + a);
	return (a);
}
