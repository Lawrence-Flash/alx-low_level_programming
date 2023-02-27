#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: the program generates a random valid password fo rthe program 101-crackme
 * Return: 0.
 */
int main(void)
{
	int i = 0, j = 0, k = 0;
	time_t t;
	
	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j += i;
		k++;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
