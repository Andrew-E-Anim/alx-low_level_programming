#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory using malloc
 *
 * @b: the number of bytes
 *
 * Return: point to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
