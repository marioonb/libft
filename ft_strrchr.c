/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:24:24 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:04:31 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char*pointeur;
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	pointeur = (char*)&s[i];
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return (pointeur);
		}
		i--;
		pointeur--;
	}
	return (0);
}
