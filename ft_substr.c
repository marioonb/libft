/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:55:48 by mbelorge          #+#    #+#             */
/*   Updated: 2019/12/02 20:23:45 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int star, size_t len)
{
	char	*resultat;

	if (!s || (star + len > ft_strlen(s)))
		return (resultat = ft_strdup("\0"));
	resultat = malloc(sizeof(char) * (len + 1));
	if (!resultat)
		return (NULL);
	s = s + star;
	ft_strlcpy(resultat, s, len + 1);
	resultat[len] = '\0';
	return (resultat);
}
