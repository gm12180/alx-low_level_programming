#include "main.h"
/**
 * print_sign - checks and prints signs depending on input
 * @n: integer n
 *
 * Return: return 1 if n is positive, return 0 if n is 0 or - if n is negative
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);

}
}
