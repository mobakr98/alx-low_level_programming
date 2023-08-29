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
int spaces;

for (i = 1; i <= size; i++)
{
spaces = size - i;
for (j = 0; j < spaces; j++)
{
_putchar (' ');
}
for (j = 0; j < i; j++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
