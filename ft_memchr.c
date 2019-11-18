/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:00:30 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 13:40:54 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*chaine;
	size_t	i;

	chaine = (char*)s;
	i = 0;
	while (chaine[i] != c && i <= n)
	{
		if (chaine[i] == '\0')
			return (0);
		i++;
	}
	if (i >= n)
		return (0);
	return (chaine + i);
}
