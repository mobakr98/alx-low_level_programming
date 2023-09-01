#include "main.h"
#include <unistd.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: string parameter
 *
 * Return: Nothing
 *
 */

void rev_string(char *s)
{
int index;
int len;
char temp;

len = _strlen(s);
for (index = 0; index < len / 2; index++)
{
temp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = temp;
}
_putchar ('\n');
}
