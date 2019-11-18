/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:46:36 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 16:41:41 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int		chercheset(char c, char set)
{
	if (c == set)
		return(1);
	else
		return(0);
}
char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*result;
	size_t	sizeset;
	char	*resultat;

	i = 0;
	j = 0;
	k = 0;
	//sizeset = ft_strlen(set);
	result = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!result)
		return (0);
	while (s1[i] != '\0')
	{
		while (chercheset(s1[i]))
			i++;
		j++;
	}
	while (chercheset s1[j])
	{
		while (j > i)
		{
			j--;
		}
	}
	while (i <= j)
	{
		result[k] = s1[i];
		i++;
	}
	result[k] = '\0';
	resultat = ft_strdup(result);
	return (resultat);
}
*/
#include "libft.h"

int        chercheset(char c, char *set)
{
  int i;

  i = 0;
  while (set[i])
    {
      if (set[i] == c)
        return(1);
      i++;
    }
  return(0);
}

char        *ft_strtrim(char const *s1, char const *set)
{
    int        i;
    int        j;
    int        k;
    char    *result;
    char    *resultat;

    i = 0;
    k = 0;
    result = malloc(sizeof(char) * strlen(s1) + 1);
    if (!result)
        return (0);
    while (chercheset(s1[i], (char*)set))
            i++;
    j = strlen(s1) - 1;
    while (chercheset(s1[j], (char*)set))
      j--;
    while (i <= j)
    {
        result[k] = s1[i];
        i++;
        k++;
    }
    result[k] = '\0';
    resultat = strdup(result);
	if(!resultat)
		return(0);
    return (resultat);
}

//int main() {
        //char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
 //       char *s2 = "aaaHello \t  Please\n Trim me !aaa";
 //       char *ret = ft_strtrim(s2, "aaa");
 // return 0;
//}
