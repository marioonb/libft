/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:37:19 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:50:01 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	int		*pointeur;
	size_t	i;

	pointeur = NULL;
	i = 0;
	pointeur = malloc(count * size);
	if (pointeur == NULL)
		return (0);
	ft_bzero(pointeur, size * count);
	return (pointeur);
}
