#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - counts number of vowels
 *
 * Return: number of vowel in a sentence
 */
int main(void)
{
	char t[100];
	int i, count = 0;

	printf("Enter a sentence: ");
	fgets(t, sizeof(t), stdin);

	for (i = 0; t[i] != '\0'; i++)
	{
		if (strchr("aeiouAEIOU", t[i]))
		{
			count++;
		}
	}
	printf("Number of vowels is:%d\n", count);
	return (0);
}
