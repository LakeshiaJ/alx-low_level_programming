#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of char,and initializes
 * it with a specific
 * @c:char to initialize
 * @size:number of bytes to allocate
 *
 * Return:a pointer to the arrayor null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arrays = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
