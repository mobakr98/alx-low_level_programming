#include "main.h"
#include <unistd.h>
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 *
 */
void times_table(void)
{
int x;
int y;
int multi;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
multi = x * y;
return (multi);
_putchar ('\t');
}
_putchar ('n');
}
}
