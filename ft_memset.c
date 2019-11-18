/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:21:22 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:01:28 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*pointeur;
	size_t	i;

	pointeur = b;
	i = 0;
	while (i < len)
	{
		pointeur[i] = c;
		i++;
	}
	return (pointeur);
}
