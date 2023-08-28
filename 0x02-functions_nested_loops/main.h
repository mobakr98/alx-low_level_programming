#ifndef _ALX_H
#define _ALX_H
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);

/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);

/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);

/**
 * print_sign - the main function
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n);

/**
 * _abs - function to compute the absolute value of an integer
 *
 * @int: integer
 * Return: abs value of an integer
 */
int _abs(int);

/**
 * print_last_last - prints digit last
 * 
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 */
void jack_bauer(void);
#endif
