#include "main.h"
/**
 * main - entry point
 *
 * Description: Prints Main with _putchar
 *
 * Return: always 0
 */

int _putchar(void);
{

	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{

		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
