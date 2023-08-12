#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char currentChar;

for (currentChar = 'a'; currentChar <= 'z'; currentChar++)
{
if (currentChar != 'e' || currentChar != 'q')
{
putchar(currentChar);
}
}
putchar('\n');
return (0);
}
