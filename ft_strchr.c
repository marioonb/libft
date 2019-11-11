/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:16:58 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 16:04:28 by mbelorge         ###   ########.fr       */
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