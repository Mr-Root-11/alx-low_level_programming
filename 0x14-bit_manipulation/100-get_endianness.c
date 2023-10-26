#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big Endian, 1 if little Endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
