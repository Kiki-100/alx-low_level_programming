#include "holberton.h"

/**
 * _islower - checks if c is lowercase
 * @c: the character to test case
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c > 97 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
