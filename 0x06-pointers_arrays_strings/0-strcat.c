/*
 * file - 0-strcat.c
 */

#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{

	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src !='\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest ='\0';
	return start;

}
