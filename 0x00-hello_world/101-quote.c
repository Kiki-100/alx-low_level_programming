#include <stdio.h>
/**
 * main - Prints quote
 * Description: Prints and that piece of art is useful"
 * - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * Return: 1
 */
int main(void)
{

char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(hello, sizeof(hello) - 1, 1, stdout);

return (1);
}
