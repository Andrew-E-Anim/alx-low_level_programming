#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * 
 * c: character to print
 *
 * Return: 1 (success)
 * Error: -1
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
