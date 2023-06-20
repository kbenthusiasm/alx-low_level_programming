#include <unistd.h>

/**
 * _putchar -  prints _putchar, followed by a new line
 * Return: On Success 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
