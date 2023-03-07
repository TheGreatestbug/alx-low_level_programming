#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n:number of bytes to be copied
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}

