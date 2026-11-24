# holbertonschool-printf

travail collaboratif dans le cadre d'un apprentissage sur la fonction print f.
Ce projet en binôme consiste à recoder de zéro notre propre version de la fonction printf de la bibliothèque standard C, nommée _printf.

Règles et contraintes techniques imposées :
Dépôt et travail en équipe : Un seul dépôt GitHub partagé (holbertonschool-printf) développé à deux à l'aide de branches Git et de Pull Requests.
Style Betty : Respect strict de la norme Betty (maximum 5 fonctions par fichier, 40 lignes maximum par fonction, aucune variable globale, fins de lignes en LF).
Compilation : Compilation sans aucun avertissement sous Ubuntu 20.04/22.04 LTS avec gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c.
Fonctions autorisées uniquement : write, malloc, free, va_start, va_arg, va_end et va_copy. Toutes les fonctions standards (printf, putchar, strlen, etc.) sont strictement interdites.
Architecture : Conception modulaire reposant sur un fichier d'en-tête central (main.h), une structure (struct) et des pointeurs sur fonctions pour associer chaque spécificateur de format à sa fonction dédiée.
