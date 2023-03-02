#include "main.h"

/**
 * *_strncpy - a function that cppies a string
 * @dest: string to copy
 * @src: String to be coppied
 * @n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
