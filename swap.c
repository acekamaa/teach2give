#include <stdio.h>

/**
 * main - swaps the place value of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int num, j;
	int swap = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while (num != 0)
	{
		j = num % 10;
		swap = swap * 10 + j;
		num /= 10;
	}
	printf("Result is: %d", swap);
	return (0);
}
