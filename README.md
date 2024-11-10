# Libft

`Libft` est un projet du cursus de l'école 42 qui consiste à créer une bibliothèque personnalisée en C, contenant des fonctions standard de la libc ainsi que des fonctions supplémentaires pour manipuler des chaînes, des mémoires et des listes. Ce projet constitue une base de fonctions essentielles qui serviront dans des projets futurs.

💯 Résultat final : 125 %

## Fonctionnalités

### Partie 1 - Fonctions de la libc

Fonctions de la bibliothèque standard réimplémentées :

- ✅ `ft_isalpha` : Vérifie si le caractère est alphabétique
- ✅ `ft_isdigit` : Vérifie si le caractère est numérique
- ✅ `ft_isalnum` : Vérifie si le caractère est alphanumérique
- ✅ `ft_isascii` : Vérifie si le caractère appartient à l’ASCII
- ✅ `ft_isprint` : Vérifie si le caractère est imprimable
- ✅ `ft_strlen` : Calcule la longueur d'une chaîne
- ✅ `ft_memset` : Remplit une zone mémoire avec un octet donné
- ✅ `ft_bzero` : Initialise une zone mémoire à zéro
- ✅ `ft_memcpy` : Copie une zone mémoire vers une autre
- ✅ `ft_memmove` : Copie une zone mémoire en gérant les zones qui se chevauchent
- ✅ `ft_strlcpy` : Copie une chaîne avec gestion de la taille
- ✅ `ft_strlcat` : Concatène deux chaînes avec gestion de la taille
- ✅ `ft_toupper` : Convertit un caractère en majuscule
- ✅ `ft_tolower` : Convertit un caractère en minuscule
- ✅ `ft_strchr` : Trouve un caractère dans une chaîne
- ✅ `ft_strrchr` : Trouve un caractère depuis la fin d’une chaîne
- ✅ `ft_strncmp` : Compare deux chaînes de caractères
- ✅ `ft_memchr` : Recherche un octet spécifique dans une zone mémoire
- ✅ `ft_memcmp` : Compare deux zones mémoire
- ✅ `ft_strnstr` : Trouve une sous-chaîne dans une chaîne
- ✅ `ft_atoi` : Convertit une chaîne en entier
- ✅ `ft_calloc` : Alloue et initialise une zone mémoire
- ✅ `ft_strdup` : Duplique une chaîne de caractères

### Partie 2 - Fonctions supplémentaires

Fonctions additionnelles pour manipuler des chaînes et des mémoires :

- ✅ `ft_substr` : Extrait une sous-chaîne
- ✅ `ft_strjoin` : Concatène deux chaînes
- ✅ `ft_strtrim` : Supprime les caractères spécifiés au début et à la fin d’une chaîne
- ✅ `ft_split` : Sépare une chaîne en sous-chaînes selon un délimiteur
- ✅ `ft_itoa` : Convertit un entier en chaîne de caractères
- ✅ `ft_strmapi` : Applique une fonction à chaque caractère d'une chaîne
- ✅ `ft_striteri` : Applique une fonction à chaque caractère d'une chaîne (en modifiant l'original)
- ✅ `ft_putchar_fd` : Écrit un caractère sur un descripteur de fichier donné
- ✅ `ft_putstr_fd` : Écrit une chaîne sur un descripteur de fichier donné
- ✅ `ft_putendl_fd` : Écrit une chaîne suivie d'un saut de ligne sur un descripteur de fichier
- ✅ `ft_putnbr_fd` : Écrit un nombre entier sur un descripteur de fichier donné

### Partie Bonus - Fonctions de gestion de listes chaînées

Fonctions de manipulation des listes chaînées :

- ✅ `ft_lstnew` : Crée un nouvel élément de liste
- ✅ `ft_lstadd_front` : Ajoute un élément au début de la liste
- ✅ `ft_lstsize` : Compte le nombre d'éléments dans la liste
- ✅ `ft_lstlast` : Renvoie le dernier élément de la liste
- ✅ `ft_lstadd_back` : Ajoute un élément à la fin de la liste
- ✅ `ft_lstdelone` : Supprime un élément de la liste
- ✅ `ft_lstclear` : Supprime tous les éléments de la liste
- ✅ `ft_lstiter` : Applique une fonction à chaque élément de la liste
- ✅ `ft_lstmap` : Crée une nouvelle liste en appliquant une fonction à chaque élément
