# 💻 _printf

Recréation simplifiée de la fonction `printf` du langage C.  
Ce projet vise à comprendre le fonctionnement interne des fonctions variadiques, des fonctions pointers et des structures.

---

## ✨ Description

La fonction `_printf` produit une sortie formatée en fonction d’une chaîne de format fournie, similaire au comportement de la fonction standard `printf`.  
Elle prend en charge plusieurs spécificateurs de conversion.

---

## 📁 Fichiers du projet

Le projet contient les fichiers suivants :

| Fichier | Rôle |
|--------|------|
| **_printf.c** | Contient la fonction principale `_printf` |
| **handlers.c** | Prototypes définit de la gestion des différents `%` |
| **structures.c** | Structure de tableau pour les handlers `%` |
| **main.h** | Gestion des prototypes||

## 🛠️ Spécificateurs pris en charge

| Spécificateur | Description |
|---------------|-------------|
| `%c` | Affiche un caractère |
| `%s` | Affiche une chaîne de caractères |
| `%%` | Affiche le caractère `%` |
| `%d` | Affiche un entier (base 10 signé) |
| `%i` | Affiche un entier (base 10 signé) |

---

## 📚 Prototypes

```c
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_percent(va_list ap);
int print_string(va_list ap);
int print_int(va_list ap);
int get_func(char s, va_list ap);


