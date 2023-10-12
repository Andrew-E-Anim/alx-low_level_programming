#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: the character to be printed
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
