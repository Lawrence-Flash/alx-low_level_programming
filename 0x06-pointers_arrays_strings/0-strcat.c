#include "main.h"

/**
 * *_strcat - a function that concatenants two strings
 * @dest: String
 * @src: String
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
