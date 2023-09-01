#include "main.h"
#include <unistd.h>

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 *
 * @str: string parameter
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
int index;
int n;

for (index = 0; str[index] != '\0'; index++)
{
if (index % 2 == 0)
{
n = index / 2;
for (index = n; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
}
else
{
n = (index -1) / 2;
for (index = n; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
}
}
_putchar('\n');
}
