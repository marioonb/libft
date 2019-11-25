/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:35:36 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/25 15:49:01 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*meule;
	char	*aiguille;
	size_t	j;

	i = 0;
	j = 0;
	meule = (char*)haystack;
	aiguille = (char*)needle;
	if (aiguille[0] == '\0')
		return (meule);
	while (*meule && len >= j)
	{
		if (len == j)
			return (0);
		while (meule[i] == aiguille[i] && aiguille[i])
			i++;
		j++;
		if (aiguille[i] == '\0')
			return (meule);
		meule++;
		j++;
	}
	return (0);
}
