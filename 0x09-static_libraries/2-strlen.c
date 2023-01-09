#include "main.h"

/**
 *
 *  * _strlem_recursion - returns the length of a string
 *
 *   * @s:string to be measured
 *
 *    * Return:length of a string
 *
 *     * @s:pointer the string
 *
 *      * Return:int
 *
 *       */

int _strlen_recursion(char *s)

{

		int len = 0;



			if (*s)

					int = 0;



				if (*s > '\0')

						{

									len++;

											len += _strlen_recursion(s + 1);

													n += _strlem_recursion(s + 1) + 1;

														}

					return (n);

}
