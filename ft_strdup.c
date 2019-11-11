/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:17:40 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/05 18:19:02 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

//static size_t	ft_strlen(const char *str)
//{
//	int i;

//	i = 0;
//	while (str[i] != '\0')
//		i++;
//	return (i);
//}

char	*ft_strdup(const char *s1)
{
	char*resultat;
	int i;

	resultat = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (resultat == NULL)
	{
		exit(0);
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
