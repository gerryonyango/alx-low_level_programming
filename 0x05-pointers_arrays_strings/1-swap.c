#include <stdio.h>
#include "main.h"
/**
 * swap_int - swipes the two numbers a and b
 *@a: print int
 *@b: print int
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
