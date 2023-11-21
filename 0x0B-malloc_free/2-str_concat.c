#include <stdlib.h>
/**
 * str_concat - function that concantenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	sum = i + j + 1; /*Add 1 to account for null terminator*/
	p = malloc(sizeof(char) * sum);
	if (p == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
