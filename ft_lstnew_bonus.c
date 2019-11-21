/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 10:59:59 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/20 12:36:18 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *resultat;

	resultat = (t_list*)malloc(sizeof(t_list));
	if (!resultat)
		return (0);
	resultat->content = content;
	resultat->next = NULL;
	return (resultat);
}
