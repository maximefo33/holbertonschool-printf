# holbertonschool-printf

travail collaboratif dans le cadre d'un apprentissage sur la fonction print f.
Ce projet en binôme consiste à recoder de zéro notre propre version de la fonction printf de la bibliothèque standard C, nommée _printf.

Règles et contraintes techniques imposées :
Dépôt et travail en équipe : Un seul dépôt GitHub partagé (holbertonschool-printf) développé à deux à l'aide de branches Git et de Pull Requests.
Style Betty : Respect strict de la norme Betty (maximum 5 fonctions par fichier, 40 lignes maximum par fonction, aucune variable globale, fins de lignes en LF).
Compilation : Compilation sans aucun avertissement sous Ubuntu 20.04/22.04 LTS avec gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c.
Fonctions autorisées uniquement : write, malloc, free, va_start, va_arg, va_end et va_copy. Toutes les fonctions standards (printf, putchar, strlen, etc.) sont strictement interdites.
Architecture : Conception modulaire reposant sur un fichier d'en-tête central (main.h), une structure (struct) et des pointeurs sur fonctions pour associer chaque spécificateur de format à sa fonction dédiée.

## Contraintes essentielles du projet printf

L'objectif du projet est de **recréer le fonctionnement de `printf` sans utiliser les fonctions de la bibliothèque standard C qui feraient le travail à notre place.**

Tu dois donc développer toi-même les mécanismes d'affichage, de conversion et de manipulation des chaînes.

### 1. Les fonctions interdites

| Catégorie | Fonctions interdites | Pourquoi ? |
|---|---|---|
| Affichage formaté | `printf`, `fprintf`, `sprintf`, `snprintf`, `vprintf` | Tu dois créer ton propre système de formatage et de conversion. |
| Affichage standard | `putchar`, `puts`, `fputs`, `fwrite` | Tu dois développer ton propre `_putchar`, en utilisant `write`. |
| Manipulation de chaînes | `strlen`, `strcpy`, `strncpy`, `strcat`, `strcmp`, `strchr` | Tu dois parcourir et manipuler les chaînes avec tes propres boucles. |
| Conversion de nombres | `itoa`, `atoi`, `strtol` | Tu dois coder toi-même les conversions entre nombres et chaînes. |
| Manipulation mémoire | `memset`, `memcpy`, `calloc`, `realloc` | Tu ne dois pas utiliser ces fonctions pour réaliser les opérations mémoire à ta place. |

### 2. Ce que tu dois coder nous même 

Voici les mécanismes que tu dois développer pour remplacer les fonctions interdites :

- **Affichage d'un caractère :** créer `_putchar` avec `write(1, &c, 1)`.
- **Affichage d'une chaîne :** parcourir les caractères jusqu'à `'\0'`.
- **Longueur d'une chaîne :** compter les caractères avec une boucle.
- **Affichage d'un entier :** créer une fonction comme `print_int`.
- **Affichage d'un entier non signé :** créer `print_unsigned_rec`.
- **Conversion numérique :** utiliser tes propres opérations arithmétiques pour extraire les chiffres d'un nombre.

Exemple de principe : pour extraire les chiffres d'un entier, les opérations `/ 10` et `% 10` permettent de récupérer respectivement le quotient et le reste de la division par 10.

### 3. Les fonctions autorisées sous condition

| Fonction | Utilisation |
|---|---|
| `malloc` | Autorisée si tu as besoin d'allouer un buffer dynamique. |
| `free` | Autorisée pour libérer la mémoire précédemment allouée. |

Attention : `malloc` et `free` ne sont utiles que si ton implémentation nécessite réellement un buffer dynamique. Elles ne remplacent pas le travail de conversion ou de formatage.

### 4. Les règles à retenir

Avant de considérer une fonctionnalité comme terminée, vérifie ces points :

- [ ] Ne pas appeler les fonctions interdites de la bibliothèque standard C.
- [ ] Réaliser soi-même les conversions de nombres.
- [ ] Réaliser soi-même le parcours et la manipulation des chaînes.
- [ ] Utiliser `_putchar` pour l'affichage d'un caractère.
- [ ] Utiliser `write` pour l'affichage demandé.
- [ ] Vérifier les allocations et libérations mémoire si un buffer dynamique est utilisé.
- [ ] Respecter les contraintes de compilation, de style Betty et les exigences particulières de chaque tâche.

**À retenir :** le but n'est pas seulement d'obtenir le même affichage que `printf`. Tu dois comprendre et reconstruire les mécanismes qui permettent à `printf` de fonctionner, sans déléguer ces opérations aux fonctions interdites.

Les contraintes précises de ton sujet et de ses différentes tâches restent prioritaires.
