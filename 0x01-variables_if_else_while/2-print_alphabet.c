#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char currentChar;

printf("Lowercase Alphabets: \n");
for (currentChar = 'a'; currentChar <= 'z'; currentChar++)
{
	printf("%c\n", currentChar);
}
return (0);
}
