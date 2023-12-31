#include <stdlib.h>
/**
 * string_nconcat - function that concantenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Character limit for String 2
 * Return: Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;
	sum = i + j + 1;
	p = malloc(sizeof(char) * sum);
	if (p == NULL)
		return (NULL);
	i = j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
