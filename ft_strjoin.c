/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:53:41 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:10:38 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*concatene(const char *s1, const char *s2, char *resultat)
{
	int i;
	int k;
	int j;
	char*chaine;

	chaine = resultat;
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		chaine[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		chaine[i + j] = s2[j];
		j++;
	}
	return (chaine);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *resultat;

	resultat = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!resultat)
		return (0);
	resultat = concatene(s1, s2, resultat);
	return (resultat);
}
