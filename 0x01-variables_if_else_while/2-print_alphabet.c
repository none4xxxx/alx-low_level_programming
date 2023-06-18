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
char alphabet = 'a';
int main()
{
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return 0;
}
