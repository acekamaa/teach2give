#include <stdio.h>

/**
 * main - check the code
 * Question 1: FIZZBUZZ
 * Write a program that prints the numbers from 1 to 100
 * For multiples of 3, print "Fizz"
 * For multiples of 5, print "Buzz"
 * For multiples of both 3 and 5, print "FizzBuzz"
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		printf("%d\n", a);
		if (a % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
	}
	return (0);
}
