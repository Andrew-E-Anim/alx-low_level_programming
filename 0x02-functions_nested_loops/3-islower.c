#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: is the character to be checked for lowercase
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
