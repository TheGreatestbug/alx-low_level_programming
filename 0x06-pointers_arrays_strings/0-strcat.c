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
	int a;
	int b;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
