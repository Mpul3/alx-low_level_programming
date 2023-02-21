#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char le;
	int i;

	i = 0;
	while (i < 10)
	{
		le = 'a';
		while (le <= 'z')
		{
			_putchar(le);
			le++;
		}
		_putchar('\n');
		i++;
	}
}
