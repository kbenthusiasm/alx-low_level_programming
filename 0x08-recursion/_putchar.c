#include <unistd.h>

/**
 * This is my _putchar.c for this task
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
