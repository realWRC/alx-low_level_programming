#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints numbers 0 - 14 and a new line to times
 */

void more_numbers(void)
{
	int c, x, y, z;

	for (x = 0; x < 10; x++)
	{
		y = 0;
		z = 0;

		for (c = 0; c < 15; c++)
		{
			_putchar('0' + y);

			if (c > 9)
			{
				_putchar('0' + z);
				z++;
			}
			if (c > 8)
			{
				y = 0;
			}
			y++;
		}
		_putchar('\n');
	}
}
