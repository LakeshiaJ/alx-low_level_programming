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
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/*check if malloc was successful*/

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

