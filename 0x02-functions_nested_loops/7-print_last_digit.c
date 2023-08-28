#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - main function
 * 
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
return (last_digit);
}
