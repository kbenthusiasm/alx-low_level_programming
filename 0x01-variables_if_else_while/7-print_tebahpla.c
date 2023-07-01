#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lower case in reverse order
 * Return: 0 (Pass)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
