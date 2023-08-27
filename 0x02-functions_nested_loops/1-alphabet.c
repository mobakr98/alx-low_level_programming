#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0
 */
int main(void)
{
    char i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
    return 0;
}
