#include "holberton.h"

/**
* _puts - prints a string followed by a newline
* @str: String to print
*
* Return: void
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
