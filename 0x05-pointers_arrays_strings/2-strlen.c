#include "holberton.h"


/**
* _strlen - returns the length of astring
* @s: the string whose length is tobe checked
*
* Return: integer length of string
*/
int _strlen(char *s)
{
int i = 0;

while (*s++)
i++;
return (i);
}
