#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: character c
 *
 * Return: Returns 1 if c is uppercase otherwise Returns 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
