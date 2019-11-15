/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:59:53 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 17:34:45 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t size)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < size)
		i++;
	if (i == size)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
