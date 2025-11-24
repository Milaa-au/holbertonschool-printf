#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype de _printf */
int _printf(const char *format, ...);


int afficher_caractere(va_list args);
int afficher_chaine(va_list args);
int afficher_pourcent(void);

#endif /* MAIN_H */
