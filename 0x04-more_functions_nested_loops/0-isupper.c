#include "main.h"

/**
 * _isupper - checks in c is uppercase
 * @c: character to be checked
 *
 * Return: 1 on success, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
