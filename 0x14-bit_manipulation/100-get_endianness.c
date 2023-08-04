#include "main.h"

/**
 * get_endianness - checks whether the machine is little or big endian
 * Return: 0 standing for big, onr1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
