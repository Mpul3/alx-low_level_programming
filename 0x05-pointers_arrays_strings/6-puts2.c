#include "main.h"

/**
 * puts2 - print everyother character of the string starting with the first one
 * @str: input
 *Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *u = str;
	int o;

	while (*u != '\0')
	{
		u++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
