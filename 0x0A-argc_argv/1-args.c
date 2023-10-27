#include <stdio.h>

/**
 * main - prints the number of arguements passed to it
 * @argc: arguements count
 * @argv: arguement array
 *
 * Description: prints the number of arguements passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
