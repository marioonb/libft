/* 

#1. La chaine de caractères à découper.
#2. Le caractère délimitant.

Valeur de retour Le tableau de nouvelles chaines de caractères,
résultant du découpage. NULL si l’allocation
échoue.

Description Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant s à
l’aide du caractère c, utilisé comme délimiteur. Le
tableau doit être terminé par NULL.*/

int     comptword (char *s, char c)
{
    int word; 
    int i; 

    word= 1; 
    i = 0; 
    while (s[i])
    {
        if (s[i] == c)
            word ++;
        i++;
    }
    return (word); 
}

char **ft_split(char const *s, char c)
{
}