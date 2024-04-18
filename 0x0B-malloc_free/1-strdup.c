#include <stdlib.h>

/**
 * _strdup - function that copies a string and returns
 * the pointer to the copied string
 * @str: string to be copied
 *
 * Return: Pointer to new string
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++; /*to account for the null characher*/

	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
