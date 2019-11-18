/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:58:15 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 12:12:24 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	destination = (char*)dest;
	source = (char*)src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (source < destination)
	{
		while (n--)
		{
			destination[n] = source[n];
		}
	}
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
