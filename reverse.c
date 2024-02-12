#include <stdio.h>

/**
 * swap_digit - takes an integer as input and reverses the digits
 * @a: holds the first integer
 * @b: holds the second integer
 *
 * Return: Nothing.
 */
void swap_digit(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a = %d, b = %d\n", a, b);
	swap_digit(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
