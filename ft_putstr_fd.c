/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:46:51 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 18:56:37 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;
	
	i = 0;
	if (!s)
        return (ft_putstr_fd("(null)", fd));

	while (s[i] != '\0')
	{
		write(fd, s + i, 1);
		i++;
	}
}