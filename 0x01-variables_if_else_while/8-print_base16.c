#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '10'; ch++)
		putchar(ch);
	for (ch = 'a'; ch < 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
