#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: character c
 *
 * Return: Returns 1 if c is lowercase otherwise return 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
