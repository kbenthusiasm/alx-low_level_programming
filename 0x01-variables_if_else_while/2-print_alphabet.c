#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Alphabet in lower case
 * Return: 0. (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
