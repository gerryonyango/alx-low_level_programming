#include<stdio.h>
/**
 * main - Prints all numbers of base 16 in lower case \n
 *
 * Return: always 0 (success/correct)
 *
 */
int main(void)
{
char base16;

for (base16 = 48 ; base16 <= 57; base16++)
{
putchar(base16);
}
for (base16 = 97 ; base16 <= 102; base16++)
{
putchar(base16);
}
putchar ('\n');
return (0);
}
