#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * Description: This function prints the numbers from 0 to 14, ten times
 *              in consecutive lines.
 *              _putchar is only used 3 times to print the numbers.
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
