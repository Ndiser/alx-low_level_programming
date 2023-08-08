#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aa;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aa = malloc(sizeof(char) * (i + 1));

	if (aa == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		aa[j] = str[j];

	return (aa);
}
