/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:29:06 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 18:40:22 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int	ft_isalpha(int c)
//{
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		return (1);
//	else
//		return (0);
//}

//static int	ft_isdigit(int c)
//{
//	if (c >= 1 && c <= 9)
//		return (1);
//	else
//		return (0);
//}
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}