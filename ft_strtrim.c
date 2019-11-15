/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:46:36 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 18:49:06 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #1. La chaine de caractères à trimmer.
#2. Le set de reference de caractères à trimmer.

La chaine de caractères trimmée. NULL si
l’allocation échoue.

Alloue (avec malloc(3)) et retourne une copie de la
chaine de caractères donnée en argument, sans les
caractères spécifiés dans le set donné en argument
au début et à la fin de la chaine de caractères.*/

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
  int i; 
  int j; 
  int k; 
  char * result; 
  size_t sizeset; 
  char*resultat; 

  i = 0; 
  j = 0; 
  k = 0; 
  sizeset = ft_strlen(set); 
  result = malloc (sizeof(char) * ft_strlen(s1) + 1); 
  if (!result)
    return (0); 
//if (s1 == '\0' || set == '\0')
 // return (0); 
  while (s1[k] != '\0')
    {
      j = 0; 
      if (s1[i] == set[j])
      {
        while (set[j] && s1[i] == set[j])
        i++; 
        j++; 
        k = k + i; 
      }
      else 
        k = k + 1; 
    }
    k = k - 1;
    j = sizeset - 1 ; 
    while (s1[k] == set[j])
    {
      while (j >= 0)
      {
        j--;
        k--;
      } 
      j = sizeset - 1 ; 
    }
    j = 0;
    while (i <= k)
    {
      result[j] = s1[i];
      i++;
      j++; 
    } 
  result [j] = '\0'; 
  resultat = ft_strdup(result); 
  return resultat; 
}

//int main() {
 //  char *s1 = "aaaaHello aaaPleaseTrim me aaa kjhaaaa";
 //  char *a = "a";
  //  char *ret = ft_strtrim(s1, a);
  //return 0;
//}



