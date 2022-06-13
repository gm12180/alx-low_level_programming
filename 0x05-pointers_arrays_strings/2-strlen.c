#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: character to use in the function
 * Return: Always 0(Success)
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
