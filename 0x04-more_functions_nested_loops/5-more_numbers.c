#include "main.h"
#include <unistd.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 *
 */

void more_numbers(void)
{
int x, y, z;

for (x = 1; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
z = y;
if (y > 9)
{
_putchar (1 + 48);
z = y % 10;
}
_putchar (z + 48);
}
_putchar ('\n');
}
}
