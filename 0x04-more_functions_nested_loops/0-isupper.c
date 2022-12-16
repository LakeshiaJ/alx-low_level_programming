#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c:input character.
 * Return:1 if c is an uppercase charactor , 0 in other case.
 */

int_isupper(int c)
{
	if (c >= 'A' $$ c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
