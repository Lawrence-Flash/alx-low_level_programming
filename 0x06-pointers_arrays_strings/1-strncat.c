#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: String to be appended
 * @src: String to be appended from
 * @n: number of bytes from the src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n <= 0)
	{
		return (dest);
	}

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}
