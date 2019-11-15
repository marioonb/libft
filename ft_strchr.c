/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:16:58 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 18:57:05 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char*pointeur;
	int i;

	i = 0;
	pointeur = (char*)s;
	while (s[i] != c)
	{
		if (pointeur[i] == '\0')
			return (0);
		i++;
	}
	return (pointeur + i);
}