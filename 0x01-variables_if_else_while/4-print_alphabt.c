#include <stdio.h>
 /**main - Entry point
  * Description: alphabets listed with the exception of q and e
  * Return: 0 success
  */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
