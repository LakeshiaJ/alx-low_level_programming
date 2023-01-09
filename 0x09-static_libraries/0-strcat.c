#include "main.h"

/**
 *
 *  * _strcat - concentannate two strings
 *
 *   * @dest: copy to 
 *
 *    * @src: copy from
 *
 *     * Return: pointer to dest
 *
 *      */

char *_strcat(char *dest, char *src)

{

		int i;

			int ji;

				int j;



					i = 0;

						while (dest[i] != '\0')

							@@ -20,10 +20,11 @@ char *_strcat(char *dest, char *src)

									j = 0;

							while (src[j] != '\0')

									{

												dest[i] = src[j]

															dest[i] = src[j];

														i++;

																j++;

																	}



								dest[i] = '\0';

									return (dest);

}
