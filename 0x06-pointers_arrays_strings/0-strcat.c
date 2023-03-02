#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concatenate
 * Description: A program that concatenates strings
 * @dest: string
 * @src: string also
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;


	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
