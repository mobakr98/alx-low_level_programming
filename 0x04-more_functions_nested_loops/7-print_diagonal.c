#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: number of times the character / should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

if (i <= 0)
{
putchar ('\n');
return;
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
putchar (' ');
}
putchar ('\\');
putchar ('\n');
}
}
