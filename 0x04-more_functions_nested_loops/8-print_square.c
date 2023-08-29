#include "main.h"
#include <unistd.h>

/**
 * print_square - function that prints a square, followed by a new line
 *
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
if (size <= 0)
{
_putchar ('\n');
}
else
{
for (j = 1; j <= size; j++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
}
