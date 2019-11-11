/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:36:24 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/05 17:22:14 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long long int i;
	unsigned long long int a;
	unsigned long long int nb;

	i = 0;
	a = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	
	while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			a = -1;
			i++; 
		}
	

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	
		return (nb * a); 
}
