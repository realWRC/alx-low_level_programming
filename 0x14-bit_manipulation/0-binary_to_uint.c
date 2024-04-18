#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: character string representing bits
 * Return: converted number on succes or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	int i, length, power, container;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	length = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			power = length - i - 1;
			container = 1;
			while (power > 0)
			{
				container *= 2;
				power--;
			}
			sum += container;
		}
	}
	return (sum);
}
