#include "main.h"
/**
 * main - entry point
 *
 * Description: Prints Main with _putchar
 *
 * Return: always 0
 */

void main(void)
{
	int i = 0;
	char c;
	char s[] = "Putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}

	return (0);
}
