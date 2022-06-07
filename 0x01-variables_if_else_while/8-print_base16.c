#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
char x;
int y;

for (y = 0; y <= 9; y++)
{
	putchar(y);
}
for (x = 'a'; x <= 'f'; x++)
{
	putchar(x);
}
return (0);
}
