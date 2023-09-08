#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: 0
 *
 * betty style doc for function main goes there
*/
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
int i;

for (i = 0; i < 10; i++)
{
	printf("%i", i);
}
printf("\n");
return (0);
}
