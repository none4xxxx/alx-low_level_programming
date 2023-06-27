#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
int i;
for (strlen(s); i = 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
