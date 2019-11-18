/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:55:48 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:09:00 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int star, size_t len)
{
	char	*resultat;
	size_t	i;
	size_t	j;

	resultat = NULL;
	i = 0;
	j = 0;
	resultat = malloc(sizeof(char) * len + 1);
	if (!resultat)
		return (0);
	while (s[i] != '\0' && len > 0)
	{
		if (i >= star)
		{
			resultat[j] = s[i];
			j++;
			len--;
		}
		i++;
	}
	resultat[j] = '\0';
	return (resultat);
}
