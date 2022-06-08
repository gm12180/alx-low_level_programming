#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
void times_table(void)
{
int i, x;

for (i = 0; i <= 9; i++)
	{
	for (x = 0; x <= 9; x++)
	{
		_putchar (x);
	}
	_putchar (i);
	}
}
