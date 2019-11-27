/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:15:04 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/25 13:57:44 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int				i;
	
	unsigned int	j;
	unsigned int	k;

	j = 0;
	i = 0;
	k = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (k < dstsize && dest[k])
		k++;
	if (dstsize <= k)
		return (dstsize + i);
	j = 0;
	while (dstsize && (--dstsize - k) && src[j])
	{
		dest[k + j] = src[j];
		j++;
	}
	dest[k + j] = '\0';
	return (i + k);
}
