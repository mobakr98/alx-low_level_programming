#include "main.h"
#include <unistd.h>

/**
 * _isalpha - main function
 *
 * @c: character to test
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
	return (1);
}
return (0);
}
