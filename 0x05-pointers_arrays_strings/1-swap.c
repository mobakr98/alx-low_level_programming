#include "main.h"
#include <unistd.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: int to be swapped
 * @b: int to be swapped
 *
 * Return: Nothing
 *
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
