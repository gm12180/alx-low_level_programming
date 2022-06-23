#include "main.h"
/**
 * 2-strlen_recursion.c - a function to returns the length of a string
 * using recursion
 * @s: a string to print length
 */
int _strlen_recursion(char *s)
{
int length = 0;

if (*s == '\0')
return (0);
else
{
length++;
length  = 1 + _strlen_recursion(s + 1);
return (length);
}
}
