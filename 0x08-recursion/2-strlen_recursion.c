#include "main.h"
/**
 * 2-strlen_recursion.c - a function to returns the length of a string
 * using recursion
 * @s: a string to print length
 */
int _strlen_recursion(char *s)
{
int length;

for (length = 0;  length != '\0'; length++)
{
_strlen_recursion(s);
return (length);
}
}
