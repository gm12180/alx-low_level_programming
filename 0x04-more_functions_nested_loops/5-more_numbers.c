#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
