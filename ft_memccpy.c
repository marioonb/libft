/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:01:11 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 19:02:06 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy (void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char*dest;
	unsigned char*source;
	size_t i;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
    	dest[i] = source[i];
		if (source[i] == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
	return (NULL);
}