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
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q'){
contnue;
}
else 
{
putchar(a);
a++;
}}
putchar('\n');
return (0);
}
