#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: Always 0
 * betty style doc for function main goes there
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
