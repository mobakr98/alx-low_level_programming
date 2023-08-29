#include "main.h"
#include <unistd.h>

/**
 * print_number - Prints an integer using _putchar
 *
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    int length = 1;
    int temp = n;
    
    while (temp / 10 != 0)
    {
        length *= 10;
        temp /= 10;
    }

    while (length != 0)
    {
        _putchar((n / length) + '0');
        n %= length;
        length /= 10;
    }
}
