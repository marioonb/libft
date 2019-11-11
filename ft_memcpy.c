/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:49:52 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 20:03:52 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char*dest;
	unsigned char*source;
	size_t i;

	i = 0;

	if (!dst && !src)
		return (NULL);
	
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	
	while (i < n)
		{
			dest[i] = source[i];
			i++; 
		}
	return (dest);
}