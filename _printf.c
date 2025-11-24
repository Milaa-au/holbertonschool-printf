#include "main.h"

/**
 * _printf - Imite printf pour %c, %s et %%
 * @chaine_format: chaîne de format
 *
 * Return: nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
    va_list arguments;
    int i = 0;
    int nb_affiches = 0;

    if (!format)
        return (-1);

    va_start(arguments, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            
            
            if (format[i] == '\0')
                return (-1);  


            if (format[i] == 'c')
                nb_affiches += afficher_caractere(arguments);
            else if (format[i] == 's')
                nb_affiches += afficher_chaine(arguments);
            else if (format[i] == '%')
                nb_affiches += afficher_pourcent();
            else
            {
                write(1, "%", 1);
                write(1, &format[i], 1);
                nb_affiches += 2;
            }
        }
        else
        {
            write(1, &format[i], 1);
            nb_affiches++;
        }
        i++;
    }

    va_end(arguments);
    return (nb_affiches);
}
