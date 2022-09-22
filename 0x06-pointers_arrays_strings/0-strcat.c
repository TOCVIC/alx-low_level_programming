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
	char destination(98) = "Hello ";
	char source(1024) = "World!\n";

	printf("concatenated string: %s\n", strcat(destination, source));

	return (0);
}
