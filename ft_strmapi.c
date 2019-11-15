/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:24:08 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 19:27:28 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #1. La chaine de caractères sur laquelle itérer
#2. La fonction à appliquer à chaque caractère.

Valeur de retour La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue.

Description Applique la fonction f à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de f. */
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char*result;

	i = 0;
	if (s == '\0')
		return (0);
	result = malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!result)
		return (0);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
