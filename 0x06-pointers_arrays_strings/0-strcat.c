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
	char destination(void) = "Hello ";
	char source(void) = "World! ";

	printf("concatenated string: %s\n", strcat(destination, source));

	return (0);
}
