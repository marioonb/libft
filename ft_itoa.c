/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:02:31 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/18 14:12:38 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char*chaine;
	int nombre;
	int nombrecompt;
	int i;

	i = 1;
	nombre = n;
	nombrecompt = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		i = 2;
		nombre = nombre * -1;
		nombrecompt = nombrecompt * -1;
	}
	while (nombrecompt /= 10)
		i++;
	if (!(chaine = malloc(i + 1)))
		return (0);
	if (i > 0)
		chaine[i] = '\0';
	while (i > 0)
	{
		chaine[i - 1] = nombre % 10 + '0';
		nombre = nombre / 10;
		i--;
	}
	if (n < 0)
		chaine[0] = '-';
	return (ft_strdup(chaine));
}
