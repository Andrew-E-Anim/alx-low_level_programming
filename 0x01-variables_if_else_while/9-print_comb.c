#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar((char)num);
		if (num != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
