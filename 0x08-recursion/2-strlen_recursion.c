#include "main.h"
/**
 * _strlem_recursion - returns the length of a string
 * @s:string to be measured
 * Return:length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)

	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
