#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
char charDigit = i + '0';
putchar(charDigit);
}
putchar('\n');
return (0);
}
