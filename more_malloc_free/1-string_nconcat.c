#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated concatenated string
 *         NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, total, i, j;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n < len2)
        total = len1 + n;
    else
        total = len1 + len2;

    concat = malloc(sizeof(char) * (total + 1));
    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < n && j < len2; j++)
        concat[i + j] = s2[j];

    concat[i + j] = '\0';

    return (concat);
}
