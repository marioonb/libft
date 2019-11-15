/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:02:31 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 19:10:01 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#1. l’integer à convertir.

Valeur de retour La chaine de caractères représentant l’integer.
NULL si l’allocation échoue.

Description Alloue (avec malloc(3)) et retourne une chaine de
caractères représentant l’integer reçu en argument.
Les nombres négatifs doivent être gérés.*/
#include "libft.h"
#include <stdlib.h>

/*char *ft_itoa(int n)
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


}*/
char    *ft_itoa(int n)
{
    char*chaine;
    int nombre;
    int nombrecompt;
    int i;

    i = 1;
    nombre = n;
    nombrecompt = n;
    if  (n == -2147483648)
        return(ft_strdup("-2147483648"));
   if (n < 0)
    {
        i = 2;
        nombre = nombre * -1; // pour retirer le signe
        nombrecompt = nombrecompt * -1;
    }
    while (nombrecompt /= 10)
        i++;
    if (!(chaine = malloc(i+1)))
        return (0);
    if (i > 0)
        chaine [i] = '\0';
    while (i > 0)
    {
        chaine[i-1] = nombre % 10 + '0';
        nombre = nombre / 10;
        i--;
    }
    if (n < 0)
        chaine[0] = '-';
    return (ft_strdup(chaine));
}
