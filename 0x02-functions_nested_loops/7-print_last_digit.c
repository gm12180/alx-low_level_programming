#include "main.h"
/**
 * print_last_digit -a function that prints the last digit of a number
 * @x: integer x
 * @ldigit: integer last digit
 *
 * Return: Always 0(Success)
 */
int print_last_digit(int x)
{
int ldigit;

if (ldigit < 0)
{
	ldigit = ((x % 10) * -1);
	_putchar (ldigit);
}
else
{
	ldigit = x % 10;
	_putchar (ldigit);
}
return (ldigit);
}
