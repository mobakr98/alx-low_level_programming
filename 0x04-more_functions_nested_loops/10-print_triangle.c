#include "main.h"
#include <unistd.h>

/**
 * print_triangle - function that prints a triangle, followed by a new line
 *
 * @size: the size of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
int i;
int j;

for (i = 1; i <= size; i++)
{
for (j = 0; j <= i; j++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
