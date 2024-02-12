#include <stdio.h>

/**
 * powerTwo - checks if a number is power of two
 * @n: holds the number to check
 *
 * Return: result,,
 * On error return 0
 */
int powerTwo(int n)
{
	if (n <= 0)
		return (0);

	return ((n & (n - 1)) == 0);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	printf("Enter the number to check: ");
	scanf("%d\n", &num);

	if (powerTwo(num))
	{
		printf("%d is a power of two\n", num);
	}
	else
	{
		printf("%d is not power of two\n", num);
	}
	return (0);
}
