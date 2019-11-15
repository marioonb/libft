
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
#include <stdlib.h>
#include "libft.h"
/*char *ft_substr(char const *s, unsigned int star, size_t len)
{
    
    char *resultat; 
    
    size_t i; 
    size_t j; 

    i = 0; 
    j = 0; 

   resultat = malloc(sizeof(char) * len +1); 
    if(!resultat)
        return (0); 

    
    while (s[i] != '\0' && i < len) 
    {
       if (i >= star)
        {
            resultat[j] = s[i];
            j++; 
        }i++;  
        
    }
    resultat [j] = '\0'; 
   
    return (resultat); 


}*/

char    *ft_substr(char const *s, unsigned int star, size_t len)
{
    char*resultat;
    size_t i;  
    size_t j;
    resultat = NULL;

    i = 0;
    j = 0;
    resultat = malloc(sizeof(char) * len +1);
    if(!resultat)
        return(0);
    while (s[i] != '\0' && len > 0)
    {
        if (i >= star)
        {
            resultat[j] = s[i];
            j++; 
            len --;
        }
        i++;
    }
    resultat[j] = '\0';
    return(resultat);
}