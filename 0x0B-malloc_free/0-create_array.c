#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char,and initializes
 * it with a specific
 * @c:char to initialize
 * @size:number of bytes to allocate
 *
 * Return:a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size of(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
