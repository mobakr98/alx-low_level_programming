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
int i;
int n;

for (i = 0; str[i] != '\0'; i++)
{
;
}
if (i % 2 == 0)
{
for (n = i / 2; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
}
else
{
for (n = ((i - 1) / 2) + 1; str[n] != '\0'; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
