#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: variable for first string
 * @src: variable for 2nd string
 * Return: Always return 0
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
