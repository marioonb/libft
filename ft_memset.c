/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:21:22 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 19:08:55 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char*pointeur;
	size_t i;

	pointeur = b;
	i = 0;
	while (i < len)
	{
		pointeur[i] = c;
		i++;
	}
	return (pointeur);
}