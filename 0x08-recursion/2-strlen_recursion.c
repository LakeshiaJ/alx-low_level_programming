#include "main.h"
/**
 * _strlem_recursion - returns the length of a string
 * @s:pointer the string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int = 0;

	if (*s > '\0')
	{
		n += _strlem_recursion(s + 1) + 1;
	}
	return (n);
}
