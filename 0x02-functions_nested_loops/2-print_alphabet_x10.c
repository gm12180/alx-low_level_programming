#include "main.h"
/**
 * print_alphabet_x10 -  prints alphabt 10 times
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
int y;
char x;

for (y = 1;  y <= 10; y++)
{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
_putchar('\n');
}
}

