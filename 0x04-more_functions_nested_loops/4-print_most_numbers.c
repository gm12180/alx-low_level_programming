#include "main.h"
/**
 * print_numbers - a function that prints the numbers
 *
 * Return: Nothing to return
 */
void print_numbers(void)
{
int x;

for (x = 0; x < 10; x++)
{
	if (x != 2 && x != 4)
	{
	_putchar (x + '0');
	}
}
_putchar ('\n');
}
