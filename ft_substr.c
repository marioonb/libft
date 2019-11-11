
#include <string.h>

/*      #1. La chaine de laquelle extraire la nouvelle
        chaine
        #2. L’index de début de la nouvelle chaine
        #3. La taille maximale de la nouvelle chaine.


        The nouvelle chaine de caractere. NULL si
        ’allocation échoue.

        Alloue (avec malloc(3)) et retourne une chaine de
         caractères issue de la chaine donnée en argument
        Cette nouvelle chaine commence à l’index ’start’ et
        a pour taille maximale ’len’*/

char *ft_substr(char const *s, unsigned int star, size_t len)
{
    
    char *resultat; 

    resultat = malloc(sizeof(len)); 

    while (s[i] != '/0') 
    {
        if (s[i] == star)
        resultat = s[i]; 
        return (resultat); 
    }




}