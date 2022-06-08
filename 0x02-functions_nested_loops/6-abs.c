#include "main.h"
/**
 * _abs -  checks an absolute value of an integer
 *@x: integer value x
 *
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
int abs;

if (x < 0)
{
	abs = x * -(1);
}
else if (x == 0)
	abs = 0;
else
	abs = x;
return (abs);
}
