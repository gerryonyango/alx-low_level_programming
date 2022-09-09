#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - this program assigns a random number to variable n
*each time it is executed.
*Description: This will print the number stored in n and say if it's positive,
*negative, or zero.
*Return: (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

 	return (0);
 
}
