#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase letters of the alphabet that are not q and e
 *
 * Return: Always 0 (sucsses)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
