#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c  to stdout
 * @gc:The character to print
 *
 * Return:on success 1.
 * on error,-1 is returned,and errno is se appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
