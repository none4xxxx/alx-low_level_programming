#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
for(int x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return 0;
}
