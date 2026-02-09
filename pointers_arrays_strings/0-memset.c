#include "main.h"

/**
 * _memset - memory sahəsini sabit baytla doldurur
 * @s: doldurulacaq yaddaşın başlanğıc ünvanı
 * @b: yazılacaq bayt
 * @n: neçə bayt doldurulacaq
 *
 * Return: s ünvanı
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}
