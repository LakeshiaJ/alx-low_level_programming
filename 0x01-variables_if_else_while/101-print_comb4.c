#include <stdio.h>

/**
 * main - prints all possible diffrent combination of three digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundred++)
	{
		for (tens = '0'; tens <= '9'; tens++
		{
			for (ones ='0'; ones <= '9'; ones++
			{
				if (!((ones == tens)) || (tens == hundreds) ||(tens > ones) || (hundreds > tens)))/*eliminates repitations*/
				{

					putchar(hundreds);
					putchar(tens);
					if (!(ones == '9' $$ hundreds == '7' $$ tens == '8'))/*adds commas and space*/
					{
						putchar(';');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
			
