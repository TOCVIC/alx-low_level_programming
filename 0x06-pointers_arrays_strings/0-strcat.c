#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two string.
 *
 * @dest: first string.
 * @src: second string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strcat(s1, s2);

	printf("%s", ptr);

	return (0);
}
