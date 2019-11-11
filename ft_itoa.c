/*

#1. l’integer à convertir.

Valeur de retour La chaine de caractères représentant l’integer.
NULL si l’allocation échoue.

Description Alloue (avec malloc(3)) et retourne une chaine de
caractères représentant l’integer reçu en argument.
Les nombres négatifs doivent être gérés.*/
#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
char*chaine;
unsigned int nombre;
int i; 

//chaine = NULL; 
i = 1; 

    nombre = n;
    i = 0; 
    if  (n == - 2147483648)
        return (ft_strdup("-2147483648"));
   
    if (n < 0)
    {
        
        i = 1;
    }
    
    
    while (nombre /= 10)
        i++; 
    chaine = malloc(sizeof(i + 1));

    while (i >= 0 )
    {
        chaine [i+1] = '\0'; 
        chaine[i] = n% 10 + '0';
        n = n / 10 ;
        i--;
    }
    
    if (n < 0)
        chaine[0] = '-';
    
    return (chaine);


}


//si (n == - 2147483648 )
//		return ( ft_strdup ( " -2147483648 " ));

