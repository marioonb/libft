/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:17:40 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:03:52 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char*resultat;
	int i;

	resultat = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!resultat)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		resultat[i] = s1[i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
