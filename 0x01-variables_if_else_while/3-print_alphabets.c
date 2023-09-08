#include <stdio.h>
/**
* main - main block
* Description: print lowercase letters of the alphabet that are not 'q' and 'e'
* Return: Alwas 0 (sucsses)
* betty style doc for function main goes there
*/

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
