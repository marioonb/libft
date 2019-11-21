/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:15:04 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/20 14:43:11 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		taille;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	taille = ft_strlen(dst);
	while (i < dstsize && dst[i])
		i++;
	if (i == dstsize)
		return (ft_strlen(src) + i);
	while (i + j < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + taille);
}
