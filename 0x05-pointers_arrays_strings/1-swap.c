#include "main.h"
/**
 * swap_int - a function that swaps the values of two nintegers
 * @a: interger to swap
 * @b: second integer to swap
 * Return: Always 0(Success)
 */
void swap_int(int *a, int *b)
{

	int x = *a;
	*a = *b;
	*b = *a;
}
