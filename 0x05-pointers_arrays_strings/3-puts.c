#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
int i;
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
for (i = 0; str[i] != '\0'; i++)
{
_putchar(i);
}
_putchar('\n');
}
