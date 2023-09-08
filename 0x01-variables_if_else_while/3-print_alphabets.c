#include <stdio.h>
/**
 * main - main block
 *
 * Description: prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Sucsses)
*/
int main(void)
{
		char c = 'a';

		while (c <= 'z')
		{
   	        putchar(c);
		c++;
		}
		c = 'A';
		while (c <= 'Z')
		{
		putchar(c);
		        c++;
		}
			putchar('\n');
		return (0);
}
