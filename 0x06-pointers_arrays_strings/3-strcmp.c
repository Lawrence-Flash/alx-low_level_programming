#include "main.h"

/**
 * _strcmp - compares pointers of two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: if str1 < str2, the negative difference of the first unmatched characters
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
