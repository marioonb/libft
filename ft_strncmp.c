/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:59:53 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/25 15:23:25 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result != 0 || !s1[i] || !s2[i])
			return (result);
		i++;
	}
	return (result);
}
