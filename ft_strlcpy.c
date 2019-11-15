/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:57:41 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/15 18:52:21 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include "libft.h"

size_t    ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j; 
 
    i = 0;
    j = 0; 
    if (dst == '\0')
        return (0); 
    while (src[i] != '\0' && i < dstsize -1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src)); 
}