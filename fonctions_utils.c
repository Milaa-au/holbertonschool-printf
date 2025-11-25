#include "main.h"
#include <stdarg.h>
#include <stdio.h>


int afficher_caractere(va_list args)
{
    char c = va_arg(args, int);
    putchar(c);
    return 1;
}

int afficher_chaine(va_list args)
{
    char *str = va_arg(args, char *);
    int nb = 0;

    if (!str)
        str = "(null)";

    while (str[nb])
    {
        putchar(str[nb]);
        nb++;
    }

    return nb;
}

int afficher_pourcent(va_list args)
{
    (void)args;
    putchar('%');
    return 1;
}

int afficher_entier(va_list args)
{
    int n = va_arg(args, int);
    char buffer[12];
    int i = 0, j, nb = 0;
    unsigned int num;

    if (n < 0)
    {
        putchar('-');
        nb++;
        num = -n;
    }
    else
        num = n;

    if (num == 0)
        buffer[i++] = '0';
    while (num > 0)
    {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }

    for (j = i - 1; j >= 0; j--)
    {
        putchar(buffer[j]);
        nb++;
    }

    return nb;
}
