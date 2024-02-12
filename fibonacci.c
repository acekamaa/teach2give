#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0, m = 1;
	int result;

	printf("Fibonacci sequence from 1 to 100 is: %d, %d\n", n, m);
	result = n + m;

	while (result <= 100)
	{
		printf(",%d", result);
		n = m;
		m = result;
		result = n + m;
	}
	return (0);
}
