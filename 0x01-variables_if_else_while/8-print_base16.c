#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char a;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
