/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:38:14 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/05 12:45:48 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{

	int i;
	int j;

	int tt; 

	tt = *(int*)dstsize; 

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] && tt < 0)
	{
		dst[i + j] = src[j];
		j++;
		tt --; 
	}
	dst[i + j] = '\0';
	return(ft_strlen(dst)+ft_strlen(src));


}
