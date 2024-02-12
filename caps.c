#include <stdio.h>
#include <ctype.h>

/**
 * transform - transform first char to uppercase
 * @n: pointer to a string
 *
 * Return: uppercase char
 */
int transform(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i - 1] || i == 0 == ' ')
		{
			n[i] = toupper(n[i]);
		}
		i++;
	}
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char n[100];

	printf("Enter a string: ");
	fgets(n, 100, stdin);
	transform(n);
	printf("Result: %s", n);
	return (0);
}
