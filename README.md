# holbertonschool-printf

Travail collaboratif dans le cadre d'un apprentissage sur la fonction printf.
Ce projet en binôme consiste à recoder de zéro notre propre version de la fonction printf de la bibliothèque standard C, nommée _printf.

Règles et contraintes techniques imposées :
Dépôt et travail en équipe : Un seul dépôt GitHub partagé (holbertonschool-printf) développé à deux à l'aide de branches Git et de Pull Requests.
Style Betty : Respect strict de la norme Betty (maximum 5 fonctions par fichier, 40 lignes maximum par fonction, aucune variable globale, fins de lignes en LF).
Compilation : Compilation sans aucun avertissement sous Ubuntu 20.04/22.04 LTS avec gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c.
Fonctions autorisées uniquement : write, malloc, free, va_start, va_arg, va_end et va_copy. 

Toutes les fonctions standards (printf, putchar, strlen, etc.) sont strictement interdites.

Architecture : Conception modulaire reposant sur un fichier d'en-tête central (main.h), une structure (struct) et des pointeurs sur fonctions pour associer chaque spécificateur de format à sa fonction dédiée.



QUE FAIT PRINTF ?

La fonction printf est une fonction variadique qui formate et affiche du texte sur la sortie standard (stdout). Elle parcourt la chaîne format caractère par caractère de gauche à droite : les caractères normaux sont envoyés directement à l'écran via write, tandis que le symbole % indique qu'un spécificateur de format suit (%c, %s, %%, %d, %i). Pour chaque spécificateur rencontré, elle récupère l'argument variable correspondant grâce aux macros de stdarg.h (va_start, va_arg, va_end) et le convertit en caractères affichables. Enfin, elle retourne le nombre total de caractères imprimés, ou -1 en cas d'erreur (comme une chaîne format nulle ou un % isolé en fin de chaîne), et affiche (null) si une chaîne nulle est passée à %s.



## Contraintes essentielles du projet printf

L'objectif du projet est de **recréer le fonctionnement de `printf` sans utiliser les fonctions de la bibliothèque standard C qui feraient le travail à notre place.**

Nous devons donc développer nous-même les mécanismes d'affichage, de conversion et de manipulation des chaînes.



### 1. Les fonctions interdites

| Catégorie | Fonctions interdites | Pourquoi ? |
|---|---|---|
| Affichage formaté | `printf`, `fprintf`, `sprintf`, `snprintf`, `vprintf` | Nous devons créer notre propre système de formatage et de conversion. |
| Affichage standard | `putchar`, `puts`, `fputs`, `fwrite` | Nous devons développer notre propre `_putchar`, en utilisant `write`. |
| Manipulation de chaînes | `strlen`, `strcpy`, `strncpy`, `strcat`, `strcmp`, `strchr` | Nous devons parcourir et manipuler les chaînes avec nos propres boucles. |
| Conversion de nombres | `itoa`, `atoi`, `strtol` | Nous devons coder nous-même les conversions entre nombres et chaînes. |
| Manipulation mémoire | `memset`, `memcpy`, `calloc`, `realloc` | Nous ne devons pas utiliser ces fonctions. |



### 2. CE QUE NOUS DEVONS CODER !!

- **Affichage d'un caractère :** créer `_putchar` avec `write(1, &c, 1)`.
- **Affichage d'une chaîne :** parcourir les caractères jusqu'à `'\0'`.
- **Longueur d'une chaîne :** compter les caractères avec une boucle.
- **Affichage d'un entier :** créer une fonction comme `print_int`.
- **Affichage d'un entier non signé :** créer `print_unsigned_rec`.
- **Conversion numérique :** utiliser nos propres opérations arithmétiques pour extraire les chiffres d'un nombre.



### 3. Les fonctions autorisées sous condition

| Fonction | Utilisation |
|---|---|
| `malloc` | Autorisée si besoin d'allouer un buffer dynamique. |
| `free` | Autorisée pour libérer la mémoire précédemment allouée. |






