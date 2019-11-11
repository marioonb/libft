/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:24:24 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 16:33:25 by mbelorge         ###   ########.fr       */
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