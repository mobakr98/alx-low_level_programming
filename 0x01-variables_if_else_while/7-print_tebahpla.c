#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char currentChar;
for (currentChar = 'z'; currentChar >= 'a'; currentChar--)
	{
	putchar(currentChar);
	}
putchar('\n');
return (0);
}
