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
	_putchar (x + '0');
}
_putchar ('\n');
}
